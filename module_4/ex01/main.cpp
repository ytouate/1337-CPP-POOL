/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:26 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/26 12:33:37 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal **animalsArray = new Animal *[ANIMALS_COUNT];
    Animal *cat;
    Animal *dog;

    // TODO
    // - FILL THE IDEAS STRING
    // - IMPLEMENT GETTERS FOR IT FOR TESTING
    // - DO MORE TESTS
    for (int x = 0; x < ANIMALS_COUNT; x++)
    {
        if (x < NUM_CATS)
        {
            cat = new Cat;
            animalsArray[x] = cat;
        }
        else
        {
            dog = new Dog;
            animalsArray[x] = dog;
        }
    }
    for (int x = 0; x < ANIMALS_COUNT; x++)
    {
        delete animalsArray[x];
    }
    delete [] animalsArray;
    system("leaks Animal");
    return 0;
}