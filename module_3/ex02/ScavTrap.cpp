/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:11:02 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/20 14:44:24 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

void ScavTrap::guardGate()
{
    std::cout
        << "ScavTrap is now in Gate keeper mode"
        << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->energyPoints - 1 < 0 or hitPoints <= 0)
    {
        std::cout << "ScavTrap " << this->name
                  << ": Cannot attack no energy/hitPoints points left"
                  << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " attacks "
                  << target << " causing " << this->attackDamage
                  << " Points of damage!" << std::endl;
        this->hitPoints -= 1;
        this->energyPoints -= 1;
    }
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &obj) : ClapTrap(obj.name)
{
    this->name = obj.name;
    this->hitPoints = obj.hitPoints;
    this->attackDamage = obj.attackDamage;
    this->energyPoints = obj.energyPoints;
}

ScavTrap &ScavTrap::operator=(ScavTrap &rhs)
{
    this->hitPoints = rhs.hitPoints;
    this->attackDamage = rhs.attackDamage;
    this->energyPoints = rhs.energyPoints;
    return (*this);
}
