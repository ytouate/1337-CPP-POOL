/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:08:24 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/19 09:35:53 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->hitPoints = 100;
    this->attackDamage = 30;
    
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &rhs)
{
    this->name = rhs.name;
    this->hitPoints = rhs.hitPoints;
    this->energyPoints = rhs.energyPoints;
    this->attackDamage = rhs.attackDamage;
    return (*this);
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
