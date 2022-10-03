/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:21:13 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/03 15:33:05 by ytouate          ###   ########.fr       */
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
    void doWork(const std::string &target) const;
    ~ShrubberyCreationForm();
};

#endif // SHRUBBERY_CREATION_FORM_HPP
