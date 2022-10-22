/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:47:14 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/20 15:05:53 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(MACRO)
#define MACRO

template <typename T>
void swap(T &x, T &y)
{
    T z;

    z = x;
    x = y;
    y = z;
}

template <typename T>
T min(T x, T y)
{
    return ((x == y) ? y : (x < y) ? x
                                   : y);
}

template <typename T>
T max(T x, T y)
{
    return ((x == y) ? y : (x > y) ? x
                                   : y);
}

#endif // MACRO
