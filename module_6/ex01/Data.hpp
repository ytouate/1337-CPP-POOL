/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:23:33 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 21:31:28 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(DATA_HPP)
#define DATA_HPP

#include <iostream>
#include <cstdint>

class Data
{
private:
    const int age;
    const std::string name;

public:
    Data();
    Data(const Data &);
    std::string const &getName(void) const;
    int getAge(void) const;
    Data &operator=(const Data &);
    ~Data();
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
#endif // DATA_HPP
