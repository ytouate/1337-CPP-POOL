/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:40:54 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 17:18:58 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

enum {
    a,
    b,
    c
};

void identify (Base *p)
{
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "its A\n";
    else if (dynamic_cast<B*>(p) != 0)
        std::cout << "its B\n";
    else
        std::cout << "its C\n";
    
}

Base * generate (void)
{
    std::srand(time(0));
    int n = std::rand() % 3;
    switch (n)
    {
        case a:
            std::cout << "Object of Type A is Created\n";
            return new A;
        case b:
        std::cout << "Object of Type B is Created\n";
            return new B;
        default:
        std::cout << "Object of Type C is Created\n";
            return new C;
    }
}