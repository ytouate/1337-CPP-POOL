/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:00:25 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/29 20:24:58 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource constructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
    // TODO
    (void)m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
}