/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:52:05 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/27 13:12:51 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cat::Cat(std::string type) : Animal(), brain(new Brain)
{
    std::cout << "Cat Parametrize Constructor Called" << std::endl;
    // this->brain = new Brain();
    this->type = type;
}

Cat::Cat() : Animal(), brain(new Brain)
{
    this->type = "Cat";
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat &Cat::operator=(Cat &rhs)
{
    std::cout << "copy assignment operator of cat\n"
              << std::endl;
    this->type = rhs.type;
    return (*this);
}

Cat::Cat(Cat &obj)
{
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
