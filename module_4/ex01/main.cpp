/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:26 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/27 18:19:13 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    Animal *animalsArray[ANIMALS_COUNT];

    std::cout << "\n====Array of Animals====" << std::endl;
    // creating the array of Animal Objects which half of it will
    // contain cats and the other half will contain dogs
    for (int x = 0; x < ANIMALS_COUNT; x++)
    {
        std::cout << "\n";
        if (x < NUM_CATS)
        {
            animalsArray[x] = new Cat;
            Cat *cat = new Cat;
            cat->fillIdeas();
            std::cout << "cat idea is " << cat->getBrain()->getIdea(0) << std::endl;
            // animalsArray[x]->operator=(*cat);
            delete cat;
        }
        else
        {
            animalsArray[x] = new Dog;
            Dog *dog = new Dog;
            dog->fillIdeas();
            // animalsArray[x]->operator=(*dog);
            delete dog;
        }
    }
    std::cout << "\n====== IDEAS ======"
              << std::endl;
    std::cout << "\n====Copy Constructors====" << std::endl;
    // creating an object from animalArray[0] which is a Cat in this case
    Animal *random = new Animal(*animalsArray[0]);
    for (int x = 0; x < ANIMALS_COUNT; x++)
    {
        std::cout << "\nanimalsArray[x] Idea: "
                  << animalsArray[x]->getBrain()->getIdea(0)
                  << std::endl;
        // deleting the cat and dog object as if they were Animal objects
        delete animalsArray[x];
    }
    std::cout << "\n====Deep Copy====" << std::endl;
    // deleting the array which contains the source of the "random" object;
    // delete [] animalsArray;
    std::cout << "Random Type: " << random->getType() << std::endl; // accessing the type
    // accessing the Brain object which should not throw a problem
    std::cout << "Random First Idea: " << random->getBrain()->getIdea(0) << std::endl;
    random->makeSound();
    std::cout << "\n====Destruction===" << std::endl;
    delete random;
    return 0;
}
