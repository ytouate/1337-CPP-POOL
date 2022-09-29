/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:04:50 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/29 18:37:20 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << "Character called" << std::endl;
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
}

Character &Character::operator=(const Character &rhs)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[i] != nullptr)
            delete this->slots[i];
        this->slots[i] = rhs.slots[i];
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[i] == nullptr)
        {
            delete this->slots[i];
            this->slots[i] = m;
            return;
        }
    }
}
void Character::unequip(int idx)
{
    if (idx > 3 or idx < 0 or this->slots[idx] == nullptr)
        return;
    this->slots[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
    this->slots[idx]->use(target);
}