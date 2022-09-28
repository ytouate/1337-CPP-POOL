/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:36 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/28 18:12:07 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include "Brain.hpp"
#include <iostream>

#define ANIMALS_COUNT 4
#define NUM_CATS (ANIMALS_COUNT / 2)

class AAnimal
{
private:
    Brain *brain;

protected:
    std::string type;

public:
    AAnimal();
    AAnimal(std::string type);
    AAnimal(AAnimal &);
    virtual void fillIdeas() = 0;
    AAnimal &operator=(AAnimal &);
    virtual std::string getType(void) const = 0;
    virtual void makeSound() const = 0;
    virtual Brain *getBrain() const = 0;
    virtual ~AAnimal();
};

#endif
