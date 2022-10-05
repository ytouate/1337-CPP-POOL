/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:46:37 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/05 19:02:49 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern randomIntern;
    try
    {
        Form *reff = randomIntern.makeForm("shrubbery creation", "Name");
        reff->doWork("A");
        std::cout << *reff << std::endl;
        delete reff;
        system("leaks ex03");
    }
    catch(std::exception & exp)
    {
        std::cout << "Failed Because" << exp.what() << " of that Type " << std::endl;
        system("leaks ex03");
    }
}