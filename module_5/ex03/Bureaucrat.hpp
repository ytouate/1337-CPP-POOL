/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:29:27 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/04 11:52:49 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"

class Form;
class Bureaucrat
{
private:
    const std::string name;
    short int grade;

public:
    Bureaucrat(const std::string &, short int);
    Bureaucrat(const Bureaucrat &);
    Bureaucrat &operator=(const Bureaucrat &);
    const std::string &getName(void) const;
    void executeForm(Form const & form);
    short int getGrade(void) const;
    Bureaucrat &operator--(int);
    void signForm(Form &);
    Bureaucrat &operator++(int);
    ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs);

#endif