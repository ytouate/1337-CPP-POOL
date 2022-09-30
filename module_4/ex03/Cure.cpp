/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:40:00 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/30 16:16:36 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
    this->type = "cure";
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const std::string &type)
{
    std::cout << "Cure parametrize Constructor called" << std::endl;
    this->type = type;
}

Cure &Cure::operator=(const Cure &rhs)
{
    this->type = rhs.type;
    return (*this);
}

Cure::Cure(const Cure &obj)
{
    (void)obj;
    this->type = obj.type;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
    return (new Cure);
}

void Cure::use(ICharacter &target)
{
    std::cout << "Cure: *heals "
              << target.getName() << "'s wounds *"
              << std::endl;
}