/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:34 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 18:50:13 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

AAnimal::AAnimal(std::string _type) : brain(0)
{
    std::cout << "Animal Parametrize Constructor Called" << std::endl;
    this->type = _type;
}

AAnimal::AAnimal() : brain(0)
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
    if (this->brain != 0)
    {
        delete this->brain;
    }
    std::cout << "Animal Destructor Called" << std::endl;
}
