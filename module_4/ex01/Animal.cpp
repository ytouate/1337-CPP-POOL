/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:34 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 18:47:01 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Animal::Animal(std::string _type) : brain(0)
{
    std::cout << "Animal Parametrize Constructor Called" << std::endl;
    this->type = _type;
}

Animal::Animal() : brain(0)
{
    this->type = "Animal";
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal &Animal::operator=(Animal &rhs)
{
    if (this != &rhs)
    {
        delete this->brain;
        this->brain = new Brain;
        this->getBrain()->operator=(*(rhs.getBrain()));
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
    if (this->brain)
        delete this->brain;
    this->brain = new Brain;
    this->brain->operator=(*(obj.getBrain()));
}

Animal::~Animal()
{
    if (this->brain != 0)
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