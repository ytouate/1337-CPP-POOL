/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:29:55 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/27 17:57:59 by ytouate          ###   ########.fr       */
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

Brain &Brain::operator=(Brain &rhs)
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = rhs.ideas[i];
    }
    return (*this);
}

void Brain::setIdea(std::string idea, int index)
{
    if (index > 100 or index < 0)
        return;
    this->ideas[index] = idea;
}
std::string Brain::getIdea(int index) const
{
    if (this != nullptr)
        return (this->ideas[index]);
    return "";
}