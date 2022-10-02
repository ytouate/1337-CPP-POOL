/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:38:02 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/02 23:11:00 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &_name, short int _grade) : name(_name)
{
    if (_grade < 1)
        throw Bureaucrat::gradeTooLow;
    else if (_grade > 150)
        throw Bureaucrat::gradeTooHigh;
    this->grade = _grade;
}

void Bureaucrat::signForm()
{
    
}
const std::string &Bureaucrat::getName(void) const
{
    return this->name;
}

short int Bureaucrat::getGrade(void) const
{
    return this->grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.getName())
{
    this->grade = obj.getGrade();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    this->grade = rhs.getGrade();
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs)
{
    os << rhs.getName() << ", "
       << "bureaucrat grade " << rhs.getGrade();
    return (os);
}

Bureaucrat &Bureaucrat::operator--(int a)
{
    (void)a;
    short int temp = this->getGrade() + 1;
    if (temp < 1)
        throw Bureaucrat::gradeTooLow;
    if (temp > 150)
        throw Bureaucrat::gradeTooHigh;
    this->grade++;
    return *this;
}

Bureaucrat &Bureaucrat::operator++(int a)
{
    (void)a;
    short int temp = this->grade - 1;
    if (temp < 1)
        throw Bureaucrat::gradeTooLow;
    if (temp > 150)
        throw Bureaucrat::gradeTooHigh;
    this->grade--;
    return *this;
}