/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:29:55 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/25 15:59:11 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor Called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}

void Brain::setIdea(std::string idea, int index)
{
    if (index < 100 and index >= 0)
        this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (index < 100 and index >= 0)
        return (this->ideas[index]);
    std::cout << "Index out of Range" << std::endl;
    std::exit(1);
}

std::ostream &operator<<(std::ostream &os, Brain &obj)
{
    for (int i = 0; i < ANIMALS_COUNT; i++)
    {
        os << obj.getIdea(i) << "\n";
    }
    return (os);
}