/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:00:43 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/29 20:15:36 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:

public:
    MateriaSource();
    MateriaSource(const MateriaSource &);
    MateriaSource & operator = (const MateriaSource &);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    ~MateriaSource();
};

#endif
