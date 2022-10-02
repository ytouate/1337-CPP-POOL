/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:38:02 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/02 18:58:46 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("")
{
    this->grade = 0;
}

Bureaucrat::Bureaucrat(const std::string &_name, short int _grade) : name(_name)
{
    if (grade < 0)
        // throw Bureaucrat::GradeTooLowException;
    if (grade > 150)
        // throw Bureaucrat::GradeTooHighException
    this->grade = _grade;
}

const std::string &Bureaucrat::getName(void) const
{
    return this->name;
}

short int Bureaucrat::getGrade(void) const
{
    return this->grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.getName())
{
    this->grade = obj.getGrade();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    this->grade = rhs.getGrade();
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs)
{
    os << rhs.getName() << ", "
       << "bureaucrat grade " << rhs.getGrade();
    return (os);
}

Bureaucrat &Bureaucrat::operator--(void)
{
    short int temp = this->getGrade() + 1;
    if (temp < 1 or temp > 150)
    {
        // raise an exception
    }
    this->grade++;
    return *this;
}

Bureaucrat &Bureaucrat::operator++(void)
{
    short int temp = this->grade - 1;
    if (temp < 1 or temp > 150)
    {
        // raise exception
    }
    this->grade--;
    return *this;
}