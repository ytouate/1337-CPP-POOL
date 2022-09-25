/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:26 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/24 20:49:20 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    // WrongAnimal and Wrong Cat Tests
    const WrongAnimal *wrong_animal = new WrongAnimal();
    const WrongAnimal *wrong_cat = new WrongCat();

    std::cout << wrong_animal->getType() << " " << std::endl;
    std::cout << wrong_cat->getType() << " " << std::endl;
    wrong_animal->makeSound();
    wrong_cat->makeSound();

    delete wrong_animal;
    delete wrong_cat;
    delete i;
    delete j;
    delete meta;

    return 0;
}