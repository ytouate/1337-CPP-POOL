/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:04:00 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/14 16:40:08 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main() {
    ClapTrap    opponent_1("name");
    ClapTrap    opponent_2("name");
    
    opponent_1.attack(opponent_2.getName());
    opponent_1.attack(opponent_2.getName());
    opponent_1.attack(opponent_2.getName());
    opponent_1.attack(opponent_2.getName());
    opponent_1.attack(opponent_2.getName());
    opponent_1.attack(opponent_2.getName());
    opponent_1.attack(opponent_2.getName());
    opponent_1.attack(opponent_2.getName());
    opponent_1.attack(opponent_2.getName());
    opponent_1.attack(opponent_2.getName());
    opponent_1.attack(opponent_2.getName());
    opponent_2.takeDamage(opponent_1.getAttackDamage());
    opponent_2.beRepaired(12);
}