/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:26 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/25 19:13:02 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *animalsArray = new Animal[ANIMALS_COUNT];
    Cat *animalCat = new Cat;
    Dog *animalDog = new Dog;

    std::cout << animalCat->getType() << std::endl;
    animalCat->fillIdeas();
    animalDog->fillIdeas();
    for (int x = 0; x < ANIMALS_COUNT; x++)
    {
        if (x < NUM_CATS)
            animalsArray[x] = *animalCat;
        else
            animalsArray[x] = *animalDog;
    }
    delete[] animalsArray;
    return 0;
}