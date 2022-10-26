/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:33:31 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/26 12:33:32 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(MUTANT_STACK_HPP)
#define MUTANT_STACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typename std::stack<T>::container_type::iterator begin()
    {
        return this->c.begin();
    }
    typename std::stack<T>::container_type::iterator end()
    {
        return this->c.end();
    }
    MutantStack() {}
    MutantStack(MutantStack const &obj)
    {
        (void)obj;
    }
    MutantStack & operator = (MutantStack const &rhs)
    {
        (void)rhs;
    }
    ~MutantStack() {}

};

#endif // MUTAN_STACK_HPP
