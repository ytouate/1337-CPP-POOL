/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:07:50 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/25 18:30:19 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string type) : Animal(), brain(new Brain())
{
    std::cout << "Dog Parametrize Constructor Called" << std::endl;
    this->type = type;
}

Dog::Dog() : Animal(), brain(new Brain())
{
    this->type = "Dog";
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog &Dog::operator=(Dog &rhs)
{
    this->type = rhs.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "woof woof !" << std::endl;
}

const Brain *Dog::getBrain(void) const
{
    return (this->brain);
}

Dog::Dog(Dog &obj)
{
    this->type = obj.type;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::fillIdeas()
{
    for (int i = 0; i < ANIMALS_COUNT; i++)
    {
        this->brain->setIdea("Dog Idea", i);
    }
}