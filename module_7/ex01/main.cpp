/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:44:09 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/21 18:59:52 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void applyString (std::string &s)
{
    s.append(" Something");
}

void applyInt (int &n)
{
    n *= 2;
}

int main()
{
    
    std::string s[3] = {"hello", "world", "Name"};
    iter(s, 3, applyString);
    std::cout << "After applying iter\n";
    for (int i = 0; i < 3; i++)
        std::cout << s[i] << "\n";
    std::cout << std::endl;
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    iter(nums, 10, applyInt);
    std::cout << "After applying iter\n";
    for (int i = 0; i < 10; i++)
        std::cout << nums[i] << "\n";
}