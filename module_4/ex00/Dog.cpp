/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:07:50 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 18:41:58 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string _type)
{
    std::cout << "Dog Parametrize Constructor Called" << std::endl;
    this->type = _type;
}

Dog::Dog()
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

Dog::Dog(Dog &obj): Animal(obj.getType())
{
    this->type = obj.type;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
}