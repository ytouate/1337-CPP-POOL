/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:08:52 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/21 21:49:50 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ARRAY_HPP)
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    T *array;
    int length;

public:
    Array()
    {
        this->array = new T[0];
        this->length = 0;
    }

    Array(unsigned int n)
    {
        this->array = new T[n];
        this->length = n;
        for (int i = 0; i < this->length; i++)
            memset(&array[i], 0, sizeof(array[i]));
    }

    Array &operator=(const Array &rhs)
    {
        delete[] this->array;
        this->length = rhs.size();
        this->array = new T[this->length];
        for (int i = 0; i < this->length; i++)
            this->array[i] = rhs[i];
        return (*this);
    }

    int size(void) const
    {
        return this->length;
    }

    T &operator[](int idx)
    {
        if (idx < 0 or idx >= this->length)
            throw(std::out_of_range("Index out of range"));
        return this->array[idx];
    }

    T const &operator[](int idx) const
    {
        if (idx < 0 or idx >= this->length)
            throw(std::out_of_range("Index out of range"));
        return this->array[idx];
    }

    Array(const Array &obj)
    {
        this->length = obj.size();
        this->array = new T[this->length];
        for (int i = 0; i < this->length; i++)
            (*this)[i] = obj[i];
    }

    ~Array()
    {
        // std::cout << "Destructor called\n";
        delete[] this->array;
        this->array = 0;
    }
};

#endif // ARRAY_HP
