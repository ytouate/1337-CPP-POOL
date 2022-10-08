/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:21:52 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/06 15:06:10 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cmath>

void RobotomyRequestForm::doWork(const std::string &target) const
{
    srand(time(0));
    int n = rand() % 2;
    if (n)
    {
        std::cout << "SOME DRILLING NOISES\n"
              << target << " has been robotomized succefully " << std::endl;
    }
    else
        std::cout << " the robotomy failed." << std::endl;
}

Form *RobotomyRequestForm::clone()
{
    return new RobotomyRequestForm(this->getName());
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