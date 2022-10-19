/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:32:18 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/19 09:55:54 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main()
{
    std::string arg;
    std::getline(std::cin, arg);
    int prc = count_precision(arg);
    print_char(arg);
    print_int(arg);
    print_float(arg, prc);
    print_double(arg);
}