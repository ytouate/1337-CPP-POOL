/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:04:00 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/17 21:14:20 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap opponent_1("Youssef");
    ClapTrap opponent_2("Touate");
    ScavTrap opponent_3("Random");

    // opponent_3 = opponent_1;
    opponent_1.attack(opponent_2.getName());
    opponent_2.takeDamage(opponent_1.getAttackDamage());
    opponent_1.attack(opponent_2.getName());
    opponent_2.takeDamage(opponent_1.getAttackDamage());
    opponent_1.attack(opponent_2.getName());
    opponent_2.takeDamage(opponent_1.getAttackDamage());
    opponent_1.attack(opponent_2.getName());
    opponent_2.takeDamage(opponent_1.getAttackDamage());
    opponent_1.attack(opponent_2.getName());
    opponent_1.highFivesGuys();
    opponent_2.takeDamage(opponent_1.getAttackDamage());
    opponent_1.attack(opponent_2.getName());
    opponent_2.takeDamage(opponent_1.getAttackDamage());
    opponent_2.beRepaired(20);
    opponent_1.attack(opponent_2.getName());
    opponent_2.takeDamage(opponent_1.getAttackDamage());
    opponent_3.attack(opponent_1.getName());
    opponent_1.takeDamage(opponent_3.getAttackDamage());
}