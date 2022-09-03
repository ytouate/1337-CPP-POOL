/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:27:44 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/02 16:11:21 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main() {
    Zombie *nyoZombie = newZombie("Youssef");
    nyoZombie->announce();
    randomChump("Touate");
    delete nyoZombie;
}