/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:36 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/25 19:05:29 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.hpp"
#include <fstream>

#define ANIMALS_COUNT 4
#define NUM_CATS (ANIMALS_COUNT / 2)

class Animal
{
private:
    Brain *brain;
protected:
    std::string type;

public:
    Animal();
    virtual void fillIdeas();
    Animal(std::string type);
    Animal(Animal &);
    Animal &operator=(Animal &);
    std::string getType(void) const;
    virtual void makeSound() const;
    virtual ~Animal();
};


#endif
