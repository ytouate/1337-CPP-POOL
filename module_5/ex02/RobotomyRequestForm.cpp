/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:21:52 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 19:02:27 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

void RobotomyRequestForm::doWork(const std::string &target) const
{
    std::srand(time(0));
    int n = std::rand() % 2 + 1;
    if (n == 1)
    {
        std::cout << "SOME DRILLING NOISES\n"
              << target << " has been robotomized succfully " << std::endl;
    }
    else
        std::cout << " the robotomy failed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &_name)
    : Form(_name, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
    : Form(obj.getName(), 72, 45)
{
    (void)obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    (void)rhs;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return;
}