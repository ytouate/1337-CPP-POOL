/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:11:04 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/18 17:14:50 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
public:
    ScavTrap(std::string name);
    void guardGate();
    void attack(const std::string &target);
    ScavTrap(ScavTrap &);
    ScavTrap &operator=(ScavTrap &);
    ~ScavTrap();
};

#endif
