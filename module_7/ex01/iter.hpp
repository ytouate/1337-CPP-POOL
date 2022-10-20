/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:44:01 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/20 17:02:34 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ITER_HPP)
#define ITER_HPP
#include <iostream>
template <typename T>
void iter(T *array, int size, void(*f)(T&))
{
    for (int i = 0; i < size; i++)
    {
        (*f)(array[i]);
    }
}

template <typename T>
void apply(T &data)
{
    // here goes the work you want to apply on the passed data;
    std::cout << data << std::endl;
}
#endif // ITER_HPP
