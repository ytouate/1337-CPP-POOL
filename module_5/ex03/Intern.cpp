/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:25:08 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/04 12:44:43 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *Intern::makeForm(const std::string &_name, const std::string &_target)
{
    Form * list[3] = {
        new ShrubberyCreationForm(_target),
        new RobotomyRequestForm(_target),
        new PresidentialPardonForm(_target),
    };

    std::string arr[3] = {
        "robotomy request",
        "shrubbery creation form",
        "presidential pardon form",
    };
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == _name)
        {
            std::cout << "Intern creates " << _target << std::endl;
            for (int j = 0; j < i; j++)
                delete list[j];
            return (list[i]->clone());
        }
    }
    std::cerr << "Cannot Create Object of type " << _name << std::endl;
    for (int i = 0; i < 3; i++)
        delete list[i];
    return 0;
}

Intern::Intern(const Intern &obj) { (void)obj; }
Intern &Intern::operator=(const Intern &rhs)
{
    (void)rhs;
    return *this;
}
Intern::Intern() {}
Intern::~Intern() {}