/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:33:21 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/27 13:41:53 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

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
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "\n === My Tests === \n";
    MutantStack<int> tmp;
    tmp.push(10);
    tmp.push(20);
    tmp.push(30);
    MutantStack<int> tmp2(tmp);
    tmp2.push(40);
    tmp = tmp2;
    MutantStack<int>::const_iterator begin_it = tmp.begin();
    MutantStack<int>::const_iterator end_it = tmp.end();

    while (begin_it != end_it)
    {
        std::cout << " " << *begin_it;
        begin_it++;
    }
    std::cout << "\n";
}
