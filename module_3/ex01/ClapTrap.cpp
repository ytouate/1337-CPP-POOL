/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:04:04 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/14 17:09:17 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) {
    std::cout << "Constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamge = 10;
}


ClapTrap::ClapTrap(ClapTrap &obj) {
    this->name.assign(obj.name);
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamge = obj.attackDamge;
}

std::string&	ClapTrap::getName(void) {
    return (this->name);
}

ClapTrap&	ClapTrap::operator= (ClapTrap &rhs) {

    if (this != &rhs) {
        this->name.assign(rhs.name);
        this->hitPoints = rhs.hitPoints;
        this->energyPoints = rhs.energyPoints;
        this->attackDamge = rhs.attackDamge;
    }
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints - amount <= 0) {
        std::cout << this->name
        << " died after taking "
        << amount << " damage" << std::endl;  
    }
    else {
        std::cout << this->name << " already died cannot take damage anymore !" << std::endl;
    }
    
}

void	ClapTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints - 1 < 0) {
        std::cout << this->name << ": Cannot be repaired No energy Points left" << std::endl;
    }
    else {
        this->hitPoints += amount;
        this->energyPoints -= 1;
    }
}

int		ClapTrap::getAttackDamage(void) {
    return (this->attackDamge);
}

void	ClapTrap::attack(const std::string& target) {
    if (this->energyPoints - 1 < 0 or this->hitPoints - 1 < 0) {
        std::cout << this->name
        << ": Cannot attack no energy/hitPoints points left"
        << std::endl;
    }
    else {
        std::cout << this->name << " attacks "
        << target << " causing " << this->attackDamge
        << " Points of damage!" << std::endl;
		this->hitPoints -=1;
        this->energyPoints -= 1;
    }
}