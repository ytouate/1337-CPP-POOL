/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:53:07 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/25 18:29:40 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;

public:
    Dog();
    Dog(std::string type);
    void fillIdeas();
    Dog(Dog &);
    Dog &operator=(Dog &);
    const Brain * getBrain(void) const;
    void makeSound() const;
    ~Dog();
};

#endif