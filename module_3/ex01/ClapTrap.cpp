/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:04:04 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/20 14:43:44 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
    this->name.assign(obj.name);
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
}

std::string &ClapTrap::getName(void)
{
    return (this->name);
}

ClapTrap &ClapTrap::operator=(ClapTrap &rhs)
{

    if (this != &rhs)
    {
        this->name.assign(rhs.name);
        this->hitPoints = rhs.hitPoints;
        this->energyPoints = rhs.energyPoints;
        this->attackDamage = rhs.attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{

    if (hitPoints - amount <= 0 or hitPoints <= 0)
        std::cout << this->name << " is Dead " << std::endl;
    else
    {
        std::cout << this->name << " took " << amount << " damage" << std::endl;
        this->hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints - 1 < 0 or hitPoints <= 0)
    {
        std::cout << this->name << ": Cannot be repaired No energy Points left" << std::endl;
    }
    else
    {
        std::cout << this->name << ": Repaired itself" << std::endl;
        this->hitPoints += amount;
        this->energyPoints -= 1;
    }
}

unsigned int ClapTrap::getAttackDamage(void)
{
    return (this->attackDamage);
}

unsigned int ClapTrap::getHitPoints(void)
{
    return (this->hitPoints);
}

void ClapTrap::attack(const std::string &target)
{
    if (this->energyPoints - 1 < 0 or hitPoints <= 0)
    {
        std::cout << this->name
                  << ": Cannot attack no energy points left"
                  << std::endl;
    }
    else
    {
        std::cout << this->name << " attacks "
                  << target << " causing " << this->attackDamage
                  << " Points of damage!" << std::endl;
        this->energyPoints -= 1;
    }
}