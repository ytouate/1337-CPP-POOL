/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:00:25 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/30 16:41:24 by ytouate          ###   ########.fr       */
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
    this->materia_count = 0;
    for (int i = 0; i < 4; i++)
    {
        this->materais[i] = nullptr;
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materais[i] == nullptr)
        {
            this->materais[i] = m;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materais[i] != nullptr)
        {
            if (this->materais[i]->getType() == type)
            {
                return this->materais[i];
            }
        }
    }
    return 0;
}