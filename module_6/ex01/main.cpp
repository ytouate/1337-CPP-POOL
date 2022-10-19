/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:32:18 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 21:48:27 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data *data;

    data = new Data;

    uintptr_t val;
    std::cout << data->name << " " << data->age << std::endl;
    val = serialize(data);
    Data *something = deserialize(val);
    std::cout << something->name << " " << something->age << std::endl;
    delete data;
    return 0;
}