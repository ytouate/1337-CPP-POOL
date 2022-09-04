/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:03:29 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/04 10:24:41 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string name);
    void    announce( void );
    void    setName(std::string name);
    ~Zombie();
};

#endif