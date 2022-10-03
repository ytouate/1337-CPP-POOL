/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:46:37 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/03 16:46:37 by ytouate          ###   ########.fr       */
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
    Bureaucrat b("B", 70);
    Bureaucrat c("C", 20);
    Bureaucrat d("D", 146);
    ShrubberyCreationForm ShrubberyForm("Shrubbery");
    PresidentialPardonForm PresidentialForm("PresidentialForm");
    RobotomyRequestForm RobotForm("RobotForm");
    try
    {
        a.signForm(ShrubberyForm);
        b.signForm(RobotForm);
        c.signForm(PresidentialForm);
    }
    catch (std::exception &exp)
    {
        std::cerr << "Error signing one of the forms because: "
                  << exp.what() << std::endl;
    }
}