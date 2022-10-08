/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:21:13 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/04 12:42:16 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(SHRUBBERY_CREATION_FORM_HPP)
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
public:
    ShrubberyCreationForm(const std::string &_name);
    void beSigned(Bureaucrat &);
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm &rhs);
    void doWork(const std::string &target) const;
    Form * clone();
    ~ShrubberyCreationForm();
};

#endif // SHRUBBERY_CREATION_FORM_HPP
