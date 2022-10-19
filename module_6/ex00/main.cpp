/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:32:18 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/19 10:19:02 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main()
{
    std::string arg;
    std::getline(std::cin, arg);
    if (!arg.empty())
    {
        int prc = count_precision(arg);
        print_char(arg);
        print_int(arg);
        print_float(arg, prc);
        print_double(arg);
    }
    else
        std::cout << "INSERT A NON-EMPTY STRING\n";
}
    