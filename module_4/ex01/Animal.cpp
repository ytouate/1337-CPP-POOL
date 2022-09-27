/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:34 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/27 13:12:24 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Animal::Animal(std::string type) : brain(nullptr)
{
    std::cout << "Animal Parametrize Constructor Called" << std::endl;
    this->type = type;
}

Animal::Animal() : brain(nullptr)
{
    this->type = "Animal";
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal &Animal::operator=(Animal &rhs)
{
    std::cout << "copy assignment operator of Animal\n"
              << std::endl;
    if (this != &rhs)
    {
        this->type.assign(rhs.type);
        if (this->brain)
            delete this->brain;
        this->brain = new Brain;
        this->brain->setIdeas(rhs.getBrain()->getIdeas());
    }
    return (*this);
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
    this->type.assign(obj.getType());
    if (this == nullptr || this->brain)
        std::cout << "\nam here\n";
    this->brain = new Brain;
    obj.getBrain() ? this->brain->setIdeas(obj.getBrain()->getIdeas()) : (void)0;
}

Animal::~Animal()
{
    if (this->brain != nullptr)
    {
        delete this->brain;
    }
    std::cout << "Animal Destructor Called" << std::endl;
}

void Animal::fillIdeas()
{
    for (int i = 0; i < 100; i++)
    {
        this->brain->setIdea("Animal Idea", i);
    }
}

Brain *Animal::getBrain() const
{
    return (this->brain);
}