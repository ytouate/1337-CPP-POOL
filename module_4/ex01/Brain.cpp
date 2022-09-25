/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:29:55 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/25 19:12:52 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain()
{
    this->ideas = new std::string[100];
    std::cout << "Brain Default constructor Called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}

void Brain::setIdea(std::string idea, int index)
{
    if (index < 100 and index >= 0)
    {
        this->ideas[index] = idea;
    }
}


void Brain::setIdeas(std::string *_ideas)
{
    this->ideas = _ideas;
}
std::string *Brain::getIdeas(void) const
{
    return (this->ideas);
}

std::ostream &operator<<(std::ostream &os, const Brain &obj)
{
    std::string *_ideas;

    _ideas = obj.getIdeas();
    for (int i = 0; i < ANIMALS_COUNT; i++)
    {
        os << _ideas[i] << "\n";
    }
    return (os);
}