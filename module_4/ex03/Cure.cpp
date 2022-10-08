/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:40:00 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 18:51:54 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
    std::cout << "Cure constructor called" << std::endl;
    this->type = "cure";
}

Cure::Cure(const std::string &_type)
{
    std::cout << "Cure parametrize Constructor called" << std::endl;
    this->type = _type;
}

Cure &Cure::operator=(const Cure &rhs)
{
    std::cout << "Cure::operator called" << std::endl;
    this->type = rhs.type;
    return (*this);
}

Cure::Cure(const Cure &obj): AMateria(obj.getType())
{
    (void)obj;
    this->type = obj.type;
}

Cure::~Cure()
{
    // std::cout << "Cure destructor called" << std::endl;
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