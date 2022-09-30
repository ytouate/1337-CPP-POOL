/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:04:50 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/30 20:46:25 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
}

Character &Character::operator=(const Character &rhs)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[i] != 0)
            delete this->slots[i];
        this->slots[i]->operator=(*rhs.getMateria(i));
    }
    return (*this);
}

AMateria *Character::getMateria(int idx) const
{
    if (idx >= 0 || idx <= 3)
        return (this->slots[idx]);
    return 0;
}

std::string const &Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[i] == 0)
        {
            this->slots[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx > 3 or idx < 0 or this->slots[idx] == 0)
        return;
    this->slots[idx] = 0;
}

Character::Character(std::string const &name)
{
    // std::cout << "Character parametrize constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->slots[i] = 0;
    this->name = name;
}
void Character::use(int idx, ICharacter &target)
{
    if (this->slots[idx] != 0)
        this->slots[idx]->use(target);
}