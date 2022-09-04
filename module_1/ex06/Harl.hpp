/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:15:23 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/03 21:21:40 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>



class Harl {
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
public:
    void    complain(std::string level);
};

typedef void    (Harl::*t_actions)(void);

#endif