/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:07:50 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/28 13:56:00 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string type) : Animal(), brain(new Brain)
{
    std::cout << "Dog Parametrize Constructor Called" << std::endl;
    this->type = type;
}

Dog::Dog() : Animal(), brain(new Brain)
{
    this->type = "Dog";
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this != &rhs)
    {
        if (this->brain)
            delete this->brain;
        this->brain = new Brain;
        this->brain->operator=(*rhs.getBrain());
        this->type = rhs.type;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "woof woof !" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    if (this->getBrain())
        delete this->brain;
    this->brain = new Brain;
    this->getBrain()->operator=(*obj.getBrain());
    this->type = obj.type;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor Called" << std::endl;
}

Brain *Dog::getBrain() const
{
    return (this->brain);
}

void Dog::fillIdeas()
{
    for (int i = 0; i < 100; i++)
    {
        this->brain->setIdea("Dog Idea", i);
    }
}

std::string Dog::getType(void) const
{
    return (this->type);
}