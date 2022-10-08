/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:02:30 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/30 18:03:22 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
public:
    Ice();
    Ice(const std::string &type);
    Ice(const Ice &);
    Ice & operator = (const Ice &rhs);
    AMateria *clone() const;
    void use(ICharacter &target);
    ~Ice();
};

#endif