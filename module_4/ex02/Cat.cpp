/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:52:05 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 18:48:56 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cat::Cat(std::string _type) : AAnimal(), brain(new Brain)
{
    std::cout << "Cat Parametrize Constructor Called" << std::endl;
    this->type = _type;
}

Cat::Cat() : AAnimal(), brain(new Brain)
{
    this->type = "Cat";
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
    if (this != &rhs)
    {
        this->type = rhs.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain;
        this->brain->operator=(*rhs.getBrain());
    }
    return (*this);
}

Cat::Cat(const Cat &obj): AAnimal(obj.getType())
{
    if (this->getBrain())
        delete this->brain;
    this->brain = new Brain;
    this->getBrain()->operator=(*obj.getBrain());
    this->type = obj.type;
}

void Cat::makeSound() const
{
    std::cout << "Meao Meao !" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor Called" << std::endl;
}

Brain *Cat::getBrain() const
{
    return (this->brain);
}

void Cat::fillIdeas()
{
    for (int i = 0; i < 100; i++)
    {
        this->brain->setIdea("Cat Idea", i);
    }
}

std::string Cat::getType(void) const
{
    return (this->type);
}
