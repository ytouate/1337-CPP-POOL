/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:25:10 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/03 20:10:55 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(INTERN_HPP)
#define INTERN_HPP

#include <iostream>

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:
    
public:
    Intern();
    Intern(const Intern &);
    Intern & operator = (const Intern &);
    Form * makeForm(const std::string &, const std::string &);
    ~Intern();
};

#endif // INTERN_HPP
