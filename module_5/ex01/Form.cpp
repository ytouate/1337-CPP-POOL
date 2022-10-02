/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:31:56 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/02 23:16:32 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string _name, short int _signGrade, short int _excuteGrade) : name(_name), isSigned(false)
{
    if (_signGrade > 150 or _signGrade < 150)
        throw GradeTooLowException();
    else if (_signGrade < 1 or _excuteGrade < 1)
        throw GradeTooHighException();
    else
    {
        this->signGrade = _signGrade;
        this->executeGrade = _excuteGrade;
    }
}

const std::string &Form::getName() const
{
    return this->name;
}

bool Form::getSigningStatus() const
{
    return isSigned;
}

short int Form::getSignGrade() const
{
    return this->signGrade;
}

short int Form::getExcuteGrade() const
{
    return this->executeGrade;
}

Form::Form(const Form &obj) : name(obj.getName())
{
    this->isSigned = obj.getSigningStatus();
    this->executeGrade = obj.getExcuteGrade();
    this->signGrade = obj.getSignGrade();
}

Form &Form::operator=(const Form &rhs)
{
    if (this != &rhs)
    {
        this->isSigned = rhs.getSigningStatus();
        this->executeGrade = rhs.getExcuteGrade();
        this->signGrade = rhs.getSignGrade();
    }
    return (*this);
}

void Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() > this->signGrade)
        throw GradeTooLowException();
    else
        this->isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
    os << "Name : " << obj.getName()
       << "Excution Grade: " << obj.getExcuteGrade()
       << "Signing Grade: " << obj.getSignGrade()
       << "Form Status: " << obj.getSigningStatus();
}
Form::~Form()
{
}