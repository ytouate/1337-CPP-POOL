/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:36 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/26 20:19:50 by ytouate          ###   ########.fr       */
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
    virtual void fillIdeas();
    Animal &operator=(Animal &);
    std::string getType(void) const;
    virtual void makeSound() const;
    virtual Brain *getBrain() const;
    virtual ~Animal();
};


#endif
