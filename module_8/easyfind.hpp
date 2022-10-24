/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:56:37 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/24 13:56:39 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#if !defined(EASY_FIND_HPP)
#define EASY_FIND_HPP
#include <numeric>
#include <algorithm>

template <typename T>
int easyfind(T x, int n)
{
    std::cout << *std::find(x.begin(), x.end(), n) << std::endl;
    return 0;
}

#endif // EASY_FIND_HPP
