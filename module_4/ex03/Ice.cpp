/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:02:15 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/30 20:46:46 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
    this->type = "ice";
    std::cout << "Ice constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &rhs)
{
    std::cout << "Ice::operator called" << std::endl;
    (void)rhs;
    return (*this);
}

Ice::Ice(const Ice &obj)
{
    this->type = obj.type;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
    return (new Ice);
}

void Ice::use(ICharacter &target)
{
    std::cout << "Ice: *shoots an ice bolt at "
              << target.getName() << "*"
              << std::endl;
}