/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:40:54 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 21:50:29 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base *p)
{
    try
    {
        if (dynamic_cast<A *>(p) != 0)
            std::cout << "The Object is of Type A\n";
        else if (dynamic_cast<B *>(p) != 0)
            std::cout << "The Objec is of Type B\n";
        else
            std::cout << "The Object is of Type C\n";
    }
    catch (std::bad_cast &e)
    {
        std::cout << "Failed To Identify the Type of the object Because "
                  << e.what() << std::endl;
    }
}

Base *generate(void)
{
    std::srand(time(0));
    int n = std::rand() % 3;
    switch (n)
    {
    case 0:
        std::cout << "Object of Type A is Created\n";
        return new A;
    case 1:
        std::cout << "Object of Type B is Created\n";
        return new B;
    default:
        std::cout << "Object of Type C is Created\n";
        return new C;
    }
}