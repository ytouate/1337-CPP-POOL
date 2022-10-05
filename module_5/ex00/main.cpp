/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:46:37 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/04 19:52:38 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("A: ", 3);
    Bureaucrat b("B: ", 150);
    Bureaucrat c("C: ", 1);
    Bureaucrat *d = new Bureaucrat(a);
    
    try
    {
        a++;
        b--;
        c++;
    }
    catch (std::exception &exp)
    {
        std::cout << "Failed to Decrement or Increment objects Because"
                  << exp.what() << std::endl;
    }
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    delete d;
}