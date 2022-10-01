/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:26 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/01 13:55:17 by ytouate          ###   ########.fr       */
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
            animalsArray[x]->operator=(*cat);
            delete cat;
        }
        else
        {
            animalsArray[x] = new Dog;
            Dog *dog = new Dog;
            dog->fillIdeas();
            animalsArray[x]->operator=(*dog);
            delete dog;
        }
    }
    std::cout << "\n====== IDEAS ======" << std::endl;
    for (int x = 0; x < ANIMALS_COUNT; x++)
    {
        std::cout << "\nanimalsArray[x] Idea: |" << animalsArray[x]->getBrain()->getIdea(0) << "|" << std::endl;
    }
    // creating an object from animalArray[0] which is a Cat in this case
    std::cout << "\n====Copy Constructors====" << std::endl;
    Animal *random = new Animal(*animalsArray[0]);
    Cat *randomCat = new Cat("Mocha");
    Dog *randomDog = new Dog("Kelb");
    randomCat->fillIdeas();
    randomDog->fillIdeas();
    Cat *newCat = new Cat(*randomCat);
    Dog *newDog = new Dog(*randomDog);
    
    delete randomCat;
    delete randomDog;

    for (int x = 0; x < ANIMALS_COUNT; x++)
    {
        // deleting the cat and dog object as if they were Animal objects
        delete animalsArray[x];
    }
    std::cout << "\n====Deep Copy====" << std::endl;
    // accessing the type
    std::cout << "Random Type: " << random->getType() << std::endl;
    std::cout << "newCat Type: " << newCat->getType() << std::endl;
    std::cout << "newDog Type: " << newDog->getType() << std::endl;
    // accessing the brain objects via the getter and printing the first idea
    std::cout << "random First Idea: " << random->getBrain()->getIdea(0) << std::endl;
    std::cout << "newDog First Idea: " << newDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "newCat First Idea: " << newCat->getBrain()->getIdea(0) << std::endl;
    // the virtual makeSound function
    random->makeSound();
    newCat->makeSound();
    newDog->makeSound();
    std::cout << "\n====Destruction===" << std::endl;
    delete random;
    delete newCat;
    delete newDog;
    return 0;
}
