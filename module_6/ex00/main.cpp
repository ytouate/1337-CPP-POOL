/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:32:18 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 21:31:04 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return 1;
    std::string arg;
    int prc = count_precision(av[1]);

    print_char(av[1]);
    print_int(av[1]);
    print_float(av[1], prc);
    print_double(av[1]);
}