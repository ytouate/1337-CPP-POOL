/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:27:29 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 21:31:18 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(UTILS_HPP)
#define UTILS_HPP

#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>

void print_char(std::string s);
void print_int(std::string s);
void print_float(std::string s, int prc);
int count_precision(std::string s);
void print_double(std::string s);

#endif // UTILS_HPP
