/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:09:47 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/04 10:25:58 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump(std::string name) {
    Zombie nyoZombieJdid(name);

    nyoZombieJdid.announce();
}