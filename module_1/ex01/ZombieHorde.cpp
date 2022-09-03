/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 09:37:30 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/03 09:52:29 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie* Zombies;
    
    Zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        Zombies[i].setName(name);
    return (Zombies);
}