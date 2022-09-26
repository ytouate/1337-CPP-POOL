/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:26 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/26 20:16:01 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    Animal **animalsArray = new Animal *[ANIMALS_COUNT];
    Cat *cat;
    Dog *dog;

    for (int x = 0; x < ANIMALS_COUNT; x++)
    {
        if (x < NUM_CATS)
        {
            cat = new Cat;
            cat->fillIdeas();
            animalsArray[x] = cat;
        }
        else
        {
            dog = new Dog;
            dog->fillIdeas();
            animalsArray[x] = dog;
        }
    }
    for (int x = 0; x < ANIMALS_COUNT; x++)
    {
        std::cout << "\n" << animalsArray[x]->getBrain()->getIdea(0) << "\n" << std::endl;
        delete animalsArray[x];
    }
    delete [] animalsArray;
    return 0;
}