/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:29:57 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/25 16:25:15 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(Brain &);
    void    setIdea(std::string idea, int index);
    std::string getIdea(int index) const;
    Brain &operator=(Brain &rhs);
    ~Brain();
};

std::ostream & operator << (std::ostream &os, const Brain &obj);

#endif