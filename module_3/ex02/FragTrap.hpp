/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:09:45 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/19 09:55:59 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
public:
    FragTrap(const std::string &name);
    FragTrap(FragTrap &);
    ~FragTrap();
    void attack(const std::string &target);
    FragTrap &operator=(FragTrap &);
    void    showInfo(void);
    void highFivesGuys(void);
};

#endif