/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notFoundException.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:39:06 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/24 16:39:07 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(NOT_FOUND_EXCEPTION)
#define NOT_FOUND_EXCEPTION

#include <iostream>

class notFoundException : public std::exception
{
private:
    
public:
    const char * what(void) const _NOEXCEPT;
};

#endif // NOT_FOUND_EXCEPTION
