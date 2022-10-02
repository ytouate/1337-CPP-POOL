/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:29:27 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/02 20:47:45 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"

class Bureaucrat
{
private:
    const std::string name;
    short int grade;
    GradeTooLowException gradeTooLow;
    GradeTooHighException gradeTooHigh;
public:
    Bureaucrat(const std::string &, short int);
    Bureaucrat(const Bureaucrat &);
    Bureaucrat & operator = (const Bureaucrat &);
    const std::string &getName( void ) const;
    short int getGrade( void ) const;
    Bureaucrat & operator -- ( int );
    Bureaucrat & operator ++ ( int );
    ~Bureaucrat();
};

std::ostream & operator << (std::ostream &os, const Bureaucrat &rhs);

#endif