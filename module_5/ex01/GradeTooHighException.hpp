/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:02:11 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 18:56:47 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(GRADE_TOO_HIGH_EXCEPTION)
#define GRADE_TOO_HIGH_EXCEPTION

#include <iostream>

class GradeTooHighException : public std::exception
{
private:
public:
    const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
};

#endif // GRADE_TOO_LOW_EXCEPTION
