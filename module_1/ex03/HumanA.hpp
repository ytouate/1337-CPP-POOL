/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:09:29 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/03 11:49:11 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    Weapon& weapon;
    std::string name;
public:
    HumanA(std::string name, Weapon& weapon);
    void    attack();
    ~HumanA();
};

#endif