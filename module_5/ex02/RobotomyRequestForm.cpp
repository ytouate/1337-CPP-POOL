/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:21:52 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/03 15:13:22 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::doWork(const std::string &target)
{
    std::cout << "SOME DRILLING NOISES\n"
              << target << " has been robotomized succfully ";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &_name) : Form(_name, 72, 45) {}
