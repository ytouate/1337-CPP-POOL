/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:09:25 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/03 12:03:42 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack() {
    std::cout << this->name << " attack with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) {
    this->name = name;
    this->weapon = weapon;
}

HumanA::~HumanA() {
    std::cout << "\033[1;32m HumanA destructered \033[0m" << std::endl;
}