/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:04:00 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/19 09:57:38 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap opp_1("Youssef");
    DiamondTrap opp_2("Touate");
    opp_1.showInfo();
    opp_1.attack(opp_2.getName());
    opp_2.takeDamage(opp_1.getAttackDamage());
    opp_1.guardGate();
    opp_1.highFivesGuys();
    opp_1.whoAmI();
}