/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:27:25 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/04 11:46:44 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FORM_HPP)
#define FORM_HPP

#include "Bureaucrat.hpp"

#include <iostream>

class Form
{
private:
    const std::string name;
    bool isSigned;
    short const int signGrade;
    short const int executeGrade;

public:
    Form(const std::string _name, short int _signGrade, short int _excuteGrade);
    const std::string &getName(void) const;
    bool getSigningStatus(void) const;
    short int getSignGrade(void) const;
    short int getExcuteGrade(void) const;
    void beSigned(Bureaucrat &);
    virtual void doWork(const std::string &target) const = 0;
    Form(const Form &);
    void execute(Bureaucrat const &executor) const;
    Form &operator=(const Form &);
    ~Form();
};

std::ostream &operator<<(std::ostream &, const Form &);

#endif // FORM_HPP
