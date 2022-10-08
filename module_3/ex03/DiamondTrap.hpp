/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:36:13 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 18:38:30 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string name;
    std::string _clap_name;

public:
    DiamondTrap(std::string );
    DiamondTrap(DiamondTrap &obj);
    DiamondTrap &operator=(DiamondTrap &rhs);
    std::string getName(void);
    unsigned int getAttackDamage(void);
    unsigned int getHitPoints(void);
    void    showInfo(void);
    void attack(const std::string &target);
    ~DiamondTrap();
    void whoAmI();
};
#endif
