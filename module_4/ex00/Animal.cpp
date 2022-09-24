/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:34 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/24 20:37:06 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type)
{
    std::cout << "Animal Parametrize Constructor Called" << std::endl;
    this->type = type;
}

Animal::Animal()
{
    this->type = "Default";
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal &Animal::operator=(Animal &rhs)
{
    this->type = rhs.type;
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
    std::cout << "Animal Destructor Called" << std::endl;
}