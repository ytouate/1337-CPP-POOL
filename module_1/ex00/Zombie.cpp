/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:05:33 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/04 10:25:06 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void) {
    std::cout << this->name + ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name) {
    this->name = name;
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << "Destructor called on: " << this->name << std::endl;
}