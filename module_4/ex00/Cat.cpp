/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:52:05 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/21 20:12:09 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string type)
{
    std::cout << "Cat Parametrize Constructor Called" << std::endl;
    this->type = type;
}

Cat::Cat()
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

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}