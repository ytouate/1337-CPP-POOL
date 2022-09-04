/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:40:09 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/04 11:21:12 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

class   Sed {
private:
    std::string fileName;
    std::string s;
    std::string s1;
    
    std::string line;
    std::string buffer;
    std::fstream replacedFile;
    std::fstream myFile;
    std::string replacedFileName;
    int occurIndex;
    int prev;
    int lineCount;
public:
    Sed(std::string fileName, std::string s, std::string s1);
    void    replace(void);
    void    handleErrors(void);
};

#endif