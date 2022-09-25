/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:26 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/25 16:23:54 by ytouate          ###   ########.fr       */
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
    Cat animalCat;
    Dog animalDog;
    
    animalCat.fillIdeas();
    animalCat.fillIdeas();
    
    delete [] animalsArray;
    for (int x = 0; x < ANIMALS_COUNT; x++) {
        if (x < NUM_CATS)
            animalsArray[x].operator=(animalCat);
        else
            animalsArray[x] = animalDog;
    }
    std::cout << animalsArray[0].getBrain() << std::endl;
    return 0;
}