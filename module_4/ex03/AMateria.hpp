/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:42:02 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/29 17:37:06 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string type;
public:
    AMateria(std::string const &type);
    AMateria();
    AMateria & operator = (AMateria &rhs);
    AMateria(const AMateria &);
    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif