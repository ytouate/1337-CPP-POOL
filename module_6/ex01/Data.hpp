/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:23:33 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/19 09:49:02 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(DATA_HPP)
#define DATA_HPP

#include <iostream>
#include <cstdint>

typedef struct s_Data
{
    s_Data();
    int a;
    bool b;
    char c;
}Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
#endif // DATA_HPP
