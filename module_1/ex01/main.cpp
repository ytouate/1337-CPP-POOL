/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:27:44 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/04 10:37:21 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name );

int main() {

    // newZombie() tests
    std::cout << "\033[1;32m ____newZombie() tests____\033[0m" << std::endl;
    Zombie *nyoZombie = newZombie("New Zombie");
    nyoZombie->announce();
    delete nyoZombie;

    // randomChump() tests
    std::cout << "\033[1;32m ____randomChump() tests____\033[0m" << std::endl;
    randomChump("random Chump");
    
    // zombieHorde() tests 
    std::cout << "\033[1;32m ____zombieHorde() tests____\033[0m" << std::endl;   
    Zombie *Zombies = zombieHorde(5, "zombie Horde");
    for (int i = 0; i < 5; i++)
        Zombies[i].announce();
    delete[] Zombies;
}