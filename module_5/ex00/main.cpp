/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:46:37 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/04 11:35:08 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("name 1: ", 3);
    Bureaucrat b("name 2: ", 150);
    Bureaucrat c("name 2: ", 1);
    try
    {
        b--;
        a++;
        c++;
    }
    catch (std::exception)
    {
        std::cout << "Exception Handeled" << std::endl;
    }
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
}