/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:33:21 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/26 12:33:22 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>
#include <iostream>

// void print(std::stack<int>& s)
// {
//     if (s.empty())
//         return ;
//     std::cout << s.top() << std::endl;
//     s.pop();
//     print(s);
// }
// int main()
// {
//     std::stack<int> container;
//     container.push(10);
//     container.push(20);

// }
#include <vector>
int main()
{

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::container_type::iterator it = mstack.begin();
    MutantStack<int>::container_type::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}