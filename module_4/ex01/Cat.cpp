/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:52:05 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/25 19:11:44 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string type) : Animal(), brain(new Brain())
{
    std::cout << "Cat Parametrize Constructor Called" << std::endl;
    // this->brain = new Brain();
    this->type = type;
}

Cat::Cat() : Animal(), brain(new Brain())
{
    this->type = "Cat";
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat &Cat::operator=(Cat &rhs)
{

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

void Cat::fillIdeas()
{
    for (int i = 0; i < 100; i++)
    {
        this->brain->setIdea("Cat Idea", i);
    }
}
