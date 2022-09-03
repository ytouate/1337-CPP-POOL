/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:09:32 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/03 15:16:10 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void    HumanB::attack() {
    if(weapon)
        std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name, Weapon *weapon): weapon(weapon) {
    this->name = name;
    this->weapon = weapon;
}

void    HumanB::setWeapon(Weapon *weapon) {
    this->weapon = weapon;
}

HumanB::~HumanB() {
    std::cout << "\033[1;32m HumanB destructered \033[0m" << std::endl;
}