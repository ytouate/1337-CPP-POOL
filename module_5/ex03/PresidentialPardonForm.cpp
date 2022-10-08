/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:19:11 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/07 14:46:31 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::doWork(const std::string &target) const
{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &_name)
    : Form(_name, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
    : Form(obj.getName(), 25, 5)
{
    (void)obj;
}

Form *PresidentialPardonForm::clone()
{
    return new PresidentialPardonForm(this->getName());
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    (void)rhs;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}