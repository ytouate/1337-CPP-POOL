/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:17:58 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/04 11:34:51 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug() {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "debug function called" << std::endl;
}

void    Harl::info() {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "info function called " << std::endl;
}

void    Harl::error() {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "error function called" << std::endl;
}
void    Harl::warning() {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "warning function called" << std::endl;
}

void    Harl::complain(std::string level) {

    

    t_actions actions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int actionIndex = -1;

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            actionIndex = i;
            break;
        }
    }
    switch (actionIndex)
    {
        case 0:
            (this->*actions[0])();
            (this->*actions[1])();
            (this->*actions[2])();
            (this->*actions[3])();
            break;
        case 1:
            (this->*actions[1])();
            (this->*actions[2])();
            (this->*actions[3])();
            break;
        case 2:
            (this->*actions[2])();
            (this->*actions[3])();
            break;
        case 3:
            (this->*actions[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}