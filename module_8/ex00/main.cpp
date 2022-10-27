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
#include <queue>
#include <array>
#include "easyfind.hpp"

int main()
{
    std::set<int> set;
    std::vector<char> vec;
    std::deque<short int> deque;
    std::array<unsigned char, 2> arr;

    vec.push_back('a');
    vec.push_back('c');

    set.insert(32);
    set.insert(11);

    deque.push_front(200);
    deque.push_front(243);

    arr[0] = 244;
    arr[1] = 255;
    try
    {
        std::cout << *easyfind(set, 11) << ": Kayn" << std::endl;
        std::cout << *easyfind(vec, 99) << ": Kayn" << std::endl;
        std::cout << *easyfind(deque, 200) << ": Kayn" << std::endl;
        std::cout << *easyfind(arr, 244) << ": Kayn" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}