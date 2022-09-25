/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:34 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/25 15:59:57 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "cstring"

Animal::Animal(std::string type) : brain(new Brain)
{
    std::cout << "Animal Parametrize Constructor Called" << std::endl;
    this->type = type;
}

Animal::Animal() : brain(new Brain)
{
    this->type = "Animal";
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal &Animal::operator=(Animal &rhs)
{
    if (this != &rhs)
    {
        if (this->brain)
        {
            delete brain;
        }
        this->brain = new Brain;
        for (int i = 0; i < 100; i++)
        {
            this->brain->setIdea(rhs.brain->getIdea(i), i);
        }
        this->type = rhs.type;
    }
    return (*this);
}

void Animal::fillIdeas()
{
    for (int i = 0; i < ANIMALS_COUNT; i++)
        this->brain->setIdea("idea", i);
}
void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

Animal::Animal(Animal &obj)
{
    this->type = obj.type;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}

const Brain & Animal::getBrain(void) const {
    return (*this->brain);
}
