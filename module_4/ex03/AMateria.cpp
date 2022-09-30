/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:44:05 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/30 16:08:35 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria Default Constructor called" << std::endl;
    this->type = "Default Type";
}

AMateria::AMateria(std::string const &type)
{
    std::cout << "AMateria Parametrize Constructor called" << std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria &obj)
{
    this->type = obj.type;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
    this->type = rhs.type;
    return (*this);
}

void AMateria::use(ICharacter &target)
{
    std::cout << this->getType()
              << ": *shoots an ice bolt at "
              << target.getName() << "*"
              << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called" << std::endl;
}


std::string const &AMateria::getType() const
{
    return (this->type);
}
