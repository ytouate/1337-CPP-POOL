/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:40:13 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/29 17:46:27 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    /* data */
public:
    Cure();
    Cure(const std::string &type);
    Cure(const Cure &);
    Cure & operator = (const Cure &rhs);
    AMateria *clone() const;
    void use(ICharacter &target);
    ~Cure();
};

#endif