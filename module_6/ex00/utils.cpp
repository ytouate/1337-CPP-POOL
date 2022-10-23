/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:27:20 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/19 17:30:13 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void print_char(std::string s)
{
    int n = atoi(s.c_str());
    char c = static_cast<char>(n);
    std::cout << "char: ";
    if (isprint(c))
        std::cout << c << std::endl;
    else if (!isdigit(s[0]))
        std::cout << "impossible" << std::endl;
    else
        std::cout << "Not Displayable" << std::endl;
}

void print_int(std::string s)
{
    std::cout << "int: ";

    if (!isdigit(s[0]))
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
              << atof(s.c_str())
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
