/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 09:59:50 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/03 10:06:59 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string myString = "HI THIS IS BRAIN";
    std::string *stringPTR = &myString;
    std::string& stringREF = myString;

    
    std::cout << "the memory address of myString is: ";
    std::cout << &myString << std::endl;

    std::cout << "the memory address held by stringPTR is: ";
    std::cout << stringPTR << std::endl;

    std::cout << "the memory address held by stringREF is: ";
    std::cout << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "the value of myString is: ";
    std::cout << myString << std::endl;
    
    std::cout << "the value of stringPTR is: ";
    std::cout << *stringPTR << std::endl;

    std::cout << "the value of stringREF is: ";
    std::cout << stringREF << std::endl;
}