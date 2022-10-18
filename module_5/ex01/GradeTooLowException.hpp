/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:48:26 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 08:31:31 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(GRADE_TOO_LOW_EXCEPTION)
#define GRADE_TOO_LOW_EXCEPTION

#include <iostream>

class GradeTooLowException : public std::exception
{
private:
public:
    const char *what() const _NOEXCEPT; //_GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
};

#endif // GRADE_TOO_LOW_EXCEPTION
