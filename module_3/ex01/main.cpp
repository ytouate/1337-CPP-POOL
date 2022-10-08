/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:04:00 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/19 09:56:57 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap opponent_1("Youssef");
    ScavTrap opponent_2("Touate");
    
    opponent_1.showInfo();
    opponent_1.attack(opponent_2.getName());
    opponent_2.takeDamage(opponent_1.getAttackDamage());
    opponent_2.guardGate();
    opponent_1.beRepaired(90);
}