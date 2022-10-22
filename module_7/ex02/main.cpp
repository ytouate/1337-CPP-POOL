/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:08:40 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/21 21:50:07 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750
int main()
{
    Array<int> nums(MAX_VAL);
    int *mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int val = rand();
        nums[i] = val;
        mirror[i] = val;
    }
    {
        Array<int> tmp = nums;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != nums[i])
        {
            std::cerr << "didn't save the same value !!" << std::endl;
            return 1;
        }
    }
    try
    {
        nums[-2] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << "\n";
    }
    try
    {
        nums[MAX_VAL] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        nums[i] = rand();
    }
    delete[] mirror;
}