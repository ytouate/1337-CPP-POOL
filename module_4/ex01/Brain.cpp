/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:29:55 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/27 23:16:33 by ytouate          ###   ########.fr       */
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
        std::cout << "this->idea: " << rhs.getIdea(i) << std::endl;
        this->ideas[i] = rhs.getIdea(i);
    }
    return (*this);
}

void Brain::setIdea(std::string idea, int index)
{
    this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    return (this->ideas[index]);
}