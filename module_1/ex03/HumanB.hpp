/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:09:42 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/03 11:12:01 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *weapon;
    std::string name;
public:
    HumanB(std::string name, Weapon *weapon = NULL);
    void    attack();
    void    setWeapon(Weapon *weapon);
    ~HumanB();
};

#endif