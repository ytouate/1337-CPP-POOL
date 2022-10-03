/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:46:37 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/03 11:34:31 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form myForm("Form", 12, 14);
        Bureaucrat obj("Youssef", 12);
        std::cout << "\n==== Form Data ====" << std::endl;
        std::cout << myForm << std::endl;
        std::cout << "\n==== Bureaucrat Data ====" << std::endl;
        std::cout << obj << std::endl;
        std::cout << "\n==== Form signing ====" << std::endl;
        try
        {
            obj.signForm(myForm);
        }
        catch (std::exception &exp)
        {
            std::cerr << "failed to sign the form because "
                      << exp.what() << std::endl;
        }
    }
    catch (std::exception &exp)
    {
        std::cout << "Program Terminated because "
                  << exp.what() << std::endl;
    }
}