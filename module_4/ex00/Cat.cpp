/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:52:05 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 18:41:27 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string &_type)
{
    std::cout << "Cat Parametrize Constructor Called" << std::endl;
    this->type = _type;
}

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat &Cat::operator=(Cat &rhs)
{
    this->type = rhs.type;
    return (*this);
}

Cat::Cat(Cat &obj): Animal(obj.getType())
{
    this->type = obj.type;
}

void Cat::makeSound() const
{
    std::cout << "Meao Meao !" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}