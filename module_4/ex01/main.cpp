/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:26 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/27 12:30:15 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    Animal *animalsArray = new Animal [ANIMALS_COUNT];
    Cat *cat;
    Dog *dog;
    
    for (int x = 0; x < ANIMALS_COUNT; x++)
    {
        std::cout << "\n" << std::endl;
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
            animalsArray[x].operator=(*cat);
        }
    }
    // std::cout << animalsArray[0]->getBrain()->getIdea(1) << std::endl << std::endl;
    // for (int x = 0; x < ANIMALS_COUNT; x++)
    // {
    //     std::cout << "\n" << animalsArray[x]->getBrain()->getIdea(0) << "\n" << std::endl;
    //     delete animalsArray[x];
    // }
    // Animal *random = new Animal (*animalsArray[0]);
    // delete [] animalsArray;
    // std::cout << "random idea is " <<  random->getType() << std::endl;
    // random->makeSound();
    return 0;
}