/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:09:46 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/03 10:55:29 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string& Weapon::getType(void){
    return this->type;
}

void    Weapon::setType(std::string type) {
    this->type = type;
}

Weapon::Weapon(std::string type) {
    this->type = type;
}

Weapon::~Weapon() {
    
}