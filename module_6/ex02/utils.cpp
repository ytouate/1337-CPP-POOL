/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:40:54 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/19 08:56:55 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base *p)
{
    if (dynamic_cast<A *>(p) != 0)
        std::cout << "The Object is of Type A\n";
    else if (dynamic_cast<B *>(p) != 0)
        std::cout << "The Objec is of Type B\n";
    else if (dynamic_cast<C *>(p) != 0)
        std::cout << "The Object is of Type C\n";
    else
        std::cout << "Unknown Type\n";

}

bool is_A(Base &p)
{
    try
    {
        Base &reff = dynamic_cast<A &>(p);
        (void)reff;
        return true;
    }
    catch (std::bad_cast &e) { return false; }
}

bool is_B(Base &p)
{
    try
    {
        Base& reff = dynamic_cast<B &>(p);
        (void)reff;
        return true;
    }
    catch (std::bad_cast &e) { return false; }
}

bool is_C(Base &p)
{
    try
    {
        Base& reff = dynamic_cast<C &>(p);
        (void)reff;
        return true;
    }
    catch (std::bad_cast &) { return false; }
}

void identify(Base &p)
{
    if (is_A(p))
        std::cout << "The Object is of Type A\n";
    else if (is_B(p))
        std::cout << "The Object is of Type B\n";
    else if (is_C(p))
        std::cout << "The Object is of Type C\n";
    else
        std::cout << "Unknown Type of Object\n";
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