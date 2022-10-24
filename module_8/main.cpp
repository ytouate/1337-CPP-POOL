/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:56:45 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/24 13:56:47 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include "easyfind.hpp"

int main()
{
    std::set<int> set;
    std::set<int>::const_iterator item;

    set.insert(10);
    set.insert(-90);
    easyfind(set, 78978);
}