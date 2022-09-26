/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:34 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/26 15:38:23 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "cstring"

Animal::Animal(std::string type) : brain (nullptr)
{
    std::cout << "Animal Parametrize Constructor Called" << std::endl;
    this->type = type;
}

Animal::Animal() : brain (nullptr)
{
    this->type = "Animal";
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal &Animal::operator=(Animal &rhs)
{
    if (this != &rhs)
    {
        if (!this->brain)
            this->brain = new Brain;
        if (!rhs.brain)
        {
            // std::cout << 
            this->brain = nullptr;
            return (*this);
        }
        std::string *_ideas = rhs.brain->getIdeas();
        this->brain->setIdeas(_ideas);
        this->type = rhs.type;
        delete _ideas;
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
    this->type = obj.type;
}

Animal::~Animal()
{
    if (this->brain != nullptr)
    {
        delete this->brain;
    }
    std::cout << "Animal Destructor Called" << std::endl;
}
