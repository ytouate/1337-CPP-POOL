/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:46:37 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/06 15:53:04 by ytouate          ###   ########.fr       */
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
    try
    {
        Intern randomIntern;
        Form *reff = randomIntern.makeForm("presidential pardon", "Name");
        std::cout << "\n";
        reff->doWork("A");
        std::cout << "\n";
        std::cout << *reff << std::endl;
        delete reff;
    }
    catch (std::exception &exp)
    {
        std::cout << "Failed Because " << exp.what() << " of the Type given" << std::endl;
    }
}