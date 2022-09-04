/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:40:07 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/04 11:21:32 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void    Sed::replace(void) {
    this->handleErrors();
    replacedFileName = fileName + ".replace";
    replacedFile.open(replacedFileName, std::ios::out | std::ios::trunc);
    while (std::getline(myFile, line)) {
        lineCount++;
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
    if (lineCount == 0) {
        std::remove(replacedFileName.c_str());
        std::cerr << "file is empty" << std::endl;
    }
}

void    Sed::handleErrors(void) {
    myFile.open(fileName, std::ios::in);
    if (!myFile.is_open())
    {
        std::cerr << "File Not Found or Permission denied" << std::endl;
        std::exit(1);
    }
}

Sed::Sed(std::string fileName, std::string s, std::string s1) {
    this->fileName = fileName;
    this->s = s;
    this->s1 = s1;
    this->replacedFileName = fileName + ".replace";
    this->occurIndex = 0;
    this->lineCount = 0;
    this->prev = -1337;
}