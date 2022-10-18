/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:26:01 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 11:33:55 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
    : age(19), name("Youssef") {}

Data::~Data() {}

Data::Data(const Data &obj)
    : age(obj.getAge()), name(obj.getName()) {}

Data &Data::operator=(const Data &rhs)
{
    (void)rhs;
    return *this;
}

std::string const &Data::getName(void) const
{
    return this->name;
}

int Data::getAge(void) const
{
    return this->age;
}