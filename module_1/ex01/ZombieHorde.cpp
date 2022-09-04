/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 09:37:30 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/04 11:29:31 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie* Zombies;
    if (N <= 0)
    {
        std::cerr << "Invalid Number to create Zombies objects" << std::endl;
        std::exit(0);
    }
    Zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        Zombies[i].setName(name);
    return (Zombies);
}