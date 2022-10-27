/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:33:31 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/27 13:41:49 by ytouate          ###   ########.fr       */
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
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
    const_iterator _cbegin() const
    {
        return this->c.begin();
    }
    const_iterator _cend() const
    {
        return this->c.end();
    }
    MutantStack() {}
    MutantStack(MutantStack const &obj) : std::stack<int>(obj) {}
    MutantStack &operator=(MutantStack const &rhs)
    {
        this->c = rhs.c;
        return *this;
    }
    ~MutantStack() {}
};

#endif // MUTAN_STACK_HPP
