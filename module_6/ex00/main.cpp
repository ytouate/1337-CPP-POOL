/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:32:18 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 19:48:14 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>

void print_char(std::string s)
{
    char c = static_cast<char>(atoi(s.c_str()));
    std::cout << "char: ";
    if (isprint(c))
        std::cout << c << std::endl;
    else if (s == "nan")
        std::cout << "impossible" << std::endl;
    else
        std::cout << "Not Displayable" << std::endl;
}

void print_int(std::string s)
{
    std::cout << "int: ";
    
    if (s == "nan")
        std::cout << "impossible" << std::endl;
    else
        std::cout << atoi(s.c_str()) << std::endl;
    
}

void print_float(std::string s, int prc)
{
    if (prc == 0)
        prc++;
    std::cout.precision(prc);
    std::cout << std::fixed;
    std::cout << "float: "
              << static_cast<float>(atof(s.c_str()))
              << "f" << std::endl;
}

int count_precision(std::string s)
{
    int count = 0;
    int i = s.find('.');
    if (i == -1)
        return count;
    i++;
    for (; s[i]; i++)
    {
        if (!isdigit(s[i]))
            break;
        count++;
    }
    return count;
}
void print_double(std::string s)
{
    std::cout << "double: " << static_cast<double>(atof(s.c_str())) << std::endl;
}

int main(int ac, char **av)
{
    if (ac != 2)
        return 1;
    int prc = count_precision(av[1]);

    print_char(av[1]);
    print_int(av[1]);
    print_float(av[1], prc);
    print_double(av[1]);
}