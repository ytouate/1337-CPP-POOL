/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:32:18 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 16:26:27 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data *data;

    data = new Data();

    uintptr_t val;

    std::cout << data->getAge() << " " << data->getName() << std::endl;
    val = serialize(data);
    Data *something = deserialize(val);
    std::cout << something->getAge() << " " << something->getName() << std::endl;
    return 0;
}