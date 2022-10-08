/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:34 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/28 18:13:00 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

AAnimal::AAnimal(std::string type) : brain(nullptr)
{
    std::cout << "Animal Parametrize Constructor Called" << std::endl;
    this->type = type;
}

AAnimal::AAnimal() : brain(nullptr)
{
    this->type = "Animal";
    std::cout << "Animal Default Constructor Called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal &rhs)
{
    if (this != &rhs)
    {
        delete this->brain;
        this->brain = new Brain;
        this->getBrain()->operator=(*(rhs.getBrain()));
    }
    return (*this);
}

AAnimal::AAnimal(AAnimal &obj)
{
    this->type.assign(obj.type);
    if (this->brain)
        delete this->brain;
    this->brain = new Brain;
    this->brain->operator=(*(obj.getBrain()));
}

AAnimal::~AAnimal()
{
    if (this->brain != nullptr)
    {
        delete this->brain;
    }
    std::cout << "Animal Destructor Called" << std::endl;
}
