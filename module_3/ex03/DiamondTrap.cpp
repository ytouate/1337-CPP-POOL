/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:36:10 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/19 10:10:35 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :ClapTrap("name_clap_trap"), FragTrap(name), ScavTrap(name)  {
    std::cout << "DiamondTrap Constructor called" << std::endl;
    this->name = name;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destructor Called" << std::endl;
}

unsigned int DiamondTrap::getAttackDamage() {
    return (this->attackDamage);
}

unsigned int DiamondTrap::getHitPoints() {
    return (this->hitPoints);
}

std::string DiamondTrap::getName() {
    return (this->name);
}

void    DiamondTrap::showInfo() {
    std::cout << "ClapTrap::name: " << ClapTrap::name << std::endl;
    std::cout << "HitPoints: " << this->hitPoints << std::endl;
    std::cout << "energyPoints: " << this->energyPoints << std::endl;
    std::cout << "Attack Damage: " << this->attackDamage << std::endl; 
}

void DiamondTrap::whoAmI(){
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "ClapTrap::name: " << ClapTrap::name << std::endl;
}