/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:19:13 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/04 12:41:34 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PRESIDENTIALPARDONFORM_HPP)
#define PRESIDENTIALPARDONFORM_HPP

#include <fstream>
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
public:
    PresidentialPardonForm(const std::string &_name);
    PresidentialPardonForm(const PresidentialPardonForm &);
    PresidentialPardonForm & operator = (const PresidentialPardonForm &);
    void doWork(const std::string &target) const;
    Form * clone();
    ~PresidentialPardonForm();
};

#endif // PRESIDENTIALPARDONFORM_HPP
