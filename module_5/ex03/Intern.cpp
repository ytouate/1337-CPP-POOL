/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:25:08 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 19:04:51 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "FormCreationException.hpp"

Form *Intern::makeForm(const std::string &_name, const std::string &_target)
{
    Form *list[3] = {
        new RobotomyRequestForm(_target),
        new ShrubberyCreationForm(_target),
        new PresidentialPardonForm(_target),
    };

    std::string arr[3] = {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon",
    };

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == _name)
        {
            Form *ref = list[i]->clone();
            std::cout << "Intern creates " << _target << std::endl;
            for (int j = 0; j < 3; j++)
                delete list[j];
            return (ref);
        }
    }
    for (int i = 0; i < 3; i++)
        delete list[i];
    throw FormCreatingException();
}

Intern::Intern(const Intern &obj) { (void)obj; }

Intern &Intern::operator=(const Intern &rhs)
{
    (void)rhs;
    return *this;
}
Intern::Intern() {}
Intern::~Intern() {}