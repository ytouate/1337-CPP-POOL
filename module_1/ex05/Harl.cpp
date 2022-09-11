/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:17:58 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/10 19:02:09 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug() {
    std::cout << "debug function called" << std::endl;
}

void    Harl::info() {
    std::cout << "info function called " << std::endl;
}

void    Harl::error() {
    std::cout << "error function called" << std::endl;
}
void    Harl::warning() {
    std::cout << "warning function called" << std::endl;
}

void    Harl::complain(std::string level) {

    typedef void    (Harl::*t_actions)(void);

    t_actions actions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"debug", "info", "warning", "error"};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i]) {
            (this->*actions[i])();
        }
    }

}