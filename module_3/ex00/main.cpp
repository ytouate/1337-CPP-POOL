/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:04:00 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/19 09:43:05 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main()
{
    ClapTrap opponent_1("Youssef");
    ClapTrap opponent_2("Touate");
    
    opponent_1.showInfo();
    opponent_1.attack(opponent_2.getName());
    opponent_2.takeDamage(opponent_1.getAttackDamage());
    opponent_2.beRepaired(10);
}