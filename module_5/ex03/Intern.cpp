/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:25:08 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/03 20:11:40 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *Intern::makeForm(const std::string &_name, const std::string &_target)
{
    Form *formList[3];
    formList[0] = new ShrubberyCreationForm(_target);
    formList[1] = new RobotomyRequestForm(_target);
    formList[2] = new PresidentialPardonForm(_target);

    std::string arr[3] = {
        "robotomy request",
        "shrubbery creation form",
        "presidential pardon form",
    };
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == _name)
        {
            i++;
            delete formList[(i + 1) % 3];
            delete formList[(i - 1) % 3];
            std::cout << "Intern creates " << _target << std::endl;
            return (formList[i]);
        }
    }
    std::cerr << "Cannot Create Object of type " << _name << std::endl;
    for (int i = 0; i < 3; i++)
        delete formList[i];
    return 0; 
}

Intern::Intern(const Intern &obj) { (void)obj; }
Intern & Intern::operator = (const Intern &rhs) { (void)rhs; return *this; }
Intern::Intern() {}
Intern::~Intern() {}