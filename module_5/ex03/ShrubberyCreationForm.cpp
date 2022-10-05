/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:21:58 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/05 19:04:25 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &_name)
    : Form(_name, 145, 137) {}

void ShrubberyCreationForm::beSigned(Bureaucrat &obj)
{
    Form::beSigned(obj);
}

Form *ShrubberyCreationForm::clone()
{
    return new ShrubberyCreationForm(this->getName());
}

void ShrubberyCreationForm::doWork(const std::string &target) const
{
    std::ofstream fileObj;
    std::string fileName = target + "shrubbery";

    fileObj.open(fileName, std::ios::out);
    if (fileObj.is_open())
    {
        fileObj << "       _-_\n"
                  << "    /~~   ~~\\\n"
                  << " /~~         ~~\\\n"
                  << "{               }\n"
                  << " \\  _-     -_  /\n"
                  << "   ~  \\\\ //  ~\n"
                  << "_- -   | | _- _\n"
                  << "  _ -  | |   -_\n"
                  << "      // \\\\"
                  << std::endl;
    }
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
    : Form(obj.getName(), 72, 45)
{
    (void)obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    (void)rhs;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}