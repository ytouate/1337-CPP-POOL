/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:36 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/28 13:54:10 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include "Brain.hpp"
#include <iostream>

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
    Animal(std::string type);
    Animal(Animal &);
    virtual void fillIdeas() = 0;
    Animal &operator=(Animal &);
    virtual std::string getType(void) const = 0;
    virtual void makeSound() const = 0;
    virtual Brain *getBrain() const = 0;
    virtual ~Animal();
};

#endif
