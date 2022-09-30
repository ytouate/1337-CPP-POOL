/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:00:25 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/30 20:47:12 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materais[i] != 0)
        {
            delete this->materais[i];
            this->materais[i] = 0;
        }
    }
    std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource constructor called" << std::endl;
    this->materia_count = 0;
    for (int i = 0; i < 4; i++)
    {
        this->materais[i] = 0;
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materais[i] == 0)
        {
            this->materais[i] = m;
            std::cout << "this->materiafssafs:  "  << this->materais[i]->getType() << std::endl;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materais[i] != 0)
        {
            if (this->materais[i]->getType() == type)
            {
                return this->materais[i];
            }
        }
    }
    return 0;
}