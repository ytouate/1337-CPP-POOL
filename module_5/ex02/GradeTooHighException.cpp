/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:02:32 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 08:30:08 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

const char *GradeTooHighException::what() const _NOEXCEPT //_GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
{
    return "Grade Too High";
}