/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:48:26 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 18:56:56 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(GRADE_TOO_LOW_EXCEPTION)
#define GRADE_TOO_LOW_EXCEPTION

#include <iostream>

class GradeTooLowException : public std::exception
{
private:
public:
    const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
};

#endif // GRADE_TOO_LOW_EXCEPTION
