/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:08:24 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/20 14:44:12 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
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

FragTrap &FragTrap::operator=(FragTrap &rhs)
{
    this->name = rhs.name;
    this->hitPoints = rhs.hitPoints;
    this->energyPoints = rhs.energyPoints;
    this->attackDamage = rhs.attackDamage;
    return (*this);
}

void FragTrap::showInfo()
{
    std::cout << "ClapTrap::name: " << ClapTrap::name << std::endl;
    std::cout << "HitPoints: " << this->hitPoints << std::endl;
    std::cout << "energyPoints: " << this->energyPoints << std::endl;
    std::cout << "Attack Damage: " << this->attackDamage << std::endl;
}

FragTrap::FragTrap(FragTrap &obj) : ClapTrap(obj.name)
{
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "HIIIIII GUYS" << std::endl;
}
