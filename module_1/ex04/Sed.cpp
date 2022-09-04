/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:40:07 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/04 09:29:52 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void    Sed::replace(void) {
    int prev;

    prev = -1337;
    myFile.open(fileName, std::ios::in);
    if (!myFile.is_open())
    {
        std::cerr << "File Not Found" << std::endl;
        return ;
    }
    replacedFileName = fileName + ".replace";
    replacedFile.open(replacedFileName, std::ios::out);
    while (std::getline(myFile, line)) {
        if (line.find(s) != std::string::npos) {
            occurIndex = line.find(s);
            prev = occurIndex;
            while (occurIndex != -1)
            {
                buffer = line.erase(occurIndex, s.length());
                buffer = line.insert(occurIndex, s1);
                occurIndex = line.find(s);
                if (prev == occurIndex)
                    break;
            }
            replacedFile << buffer;
            replacedFile << "\n";
        }
        else {
            replacedFile << line;
            replacedFile << "\n";
        }
    }
}

Sed::Sed(std::string fileName, std::string s, std::string s1) {
    this->fileName = fileName;
    this->s = s;
    this->s1 = s1;
    this->replacedFileName = fileName + ".replace";
    this->occurIndex = 0;
}