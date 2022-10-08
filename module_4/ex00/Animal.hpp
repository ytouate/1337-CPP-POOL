/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:36 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 18:42:30 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(std::string _type);
    Animal(Animal &);
    Animal &operator=(Animal &);
    std::string getType(void) const;
    virtual void makeSound() const;
    virtual ~Animal();
};

#endif