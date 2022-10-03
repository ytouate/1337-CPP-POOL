/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:46:37 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/03 17:18:56 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat a("A", 100);
    Bureaucrat b("B", 40);
    Bureaucrat c("C", 4);
    Bureaucrat d("D", 146);
    ShrubberyCreationForm ShrubberyForm("Shrubbery");
    PresidentialPardonForm PresidentialForm("PresidentialForm");
    RobotomyRequestForm RobotForm("RobotForm");
    try
    {
        std::cout << "\n==== testing with acceptable data ====" << std::endl;
        a.signForm(ShrubberyForm);
        b.signForm(RobotForm);
        c.signForm(PresidentialForm);
        std::cout << "\n==== testing with non-adequate data====" << std::endl;
        d.signForm(ShrubberyForm);
        d.signForm(RobotForm);
        d.signForm(PresidentialForm);
        std::cout << "\n==== doWork() and execute() tests====" << std::endl;
        a.executeForm(ShrubberyForm);
        b.executeForm(RobotForm);
        c.executeForm(PresidentialForm);
    }
    catch (std::exception &exp)
    {
        std::cerr << "Error signing one of the forms because: "
                  << exp.what() << std::endl;
    }
}