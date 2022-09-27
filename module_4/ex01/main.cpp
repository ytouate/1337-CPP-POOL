/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:26 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/27 13:12:21 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    Animal *animalsArray = new Animal[ANIMALS_COUNT];
    Cat *cat;
    Dog *dog;

    for (int x = 0; x < ANIMALS_COUNT; x++)
    {
        std::cout << "\n"
                  << std::endl;
        if (x < NUM_CATS)
        {
            cat = new Cat;
            cat->fillIdeas();
            animalsArray[x].operator=(*cat);
        }
        else
        {
            dog = new Dog;
            dog->fillIdeas();
            animalsArray[x].operator=(*dog);
        }
    }
    for (int x = 0; x < ANIMALS_COUNT; x++)
    {
        std::cout << "\n"
                  << animalsArray[x].getBrain()->getIdea(0) << "\n"
                  << std::endl;
    }
    Animal *random = new Animal(animalsArray[0]);
    (void)random;
    delete[] animalsArray;
    std::cout << random->getType() << std::endl;
    std::cout << random->getBrain()->getIdea(0) << std::endl;
    random->makeSound();
    return 0;
}