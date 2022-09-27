/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:29:55 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/27 17:41:05 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "main.hpp"

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
    {
        this->ideas[index] = idea;
    }
}

void Brain::setIdeas(std::string *_ideas)
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = _ideas[i];
    }
}

std::string *Brain::getIdeas(void) const
{
    if (this == nullptr)
        return nullptr;
    std::string *temp = new std::string[100];
    for (int i = 0; i < 100; i++)
    {
        temp[i] = this->ideas[i];
    }
    return (temp);
}

Brain &Brain::operator=(Brain &rhs)
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = rhs.ideas[i];
    }
    return (*this);
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

std::string Brain::getIdea(int index) const
{
    if (this != nullptr)
        return (this->ideas[index]);
    return "";
}