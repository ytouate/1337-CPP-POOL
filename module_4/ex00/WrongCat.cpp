/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:52:05 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/24 12:27:24 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(std::string type)
{
    std::cout << "WrongCat Parametrize Constructor Called" << std::endl;
    this->type = type;
}

WrongCat::WrongCat() : Animal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &rhs)
{
    this->type = rhs.type;
    return (*this);
}

WrongCat::WrongCat(WrongCat &obj)
{
    this->type = obj.type;
}

void WrongCat::makeSound() const
{
    std::cout << "Meao Meao !" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}