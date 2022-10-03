/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:20:25 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/03 15:32:59 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ROBOTOMY_REQUESTED_FORM_HPP)
#define ROBOTOMY_REQUESTED_FORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    
public:
    RobotomyRequestForm(const std::string &_name);
    ~RobotomyRequestForm();
    void doWork(const std::string &target) const;
};

#endif // ROBOTOMY_REQUESTED_FORM_HPP
