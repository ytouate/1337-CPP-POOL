/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:06:55 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/03 15:31:56 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


int main(int ac, char **av) {
    
    if (ac != 4)
    {
        std::cout
        << "Usage: [file name] [string to be replaced] [string to replace with]"
        << std::endl;
        return (1);
    }
    std::string fileName;
    std::string s;
    std::string s1;
    
    std::string line;
    std::string buffer;
    std::fstream replacedFile;
    std::fstream myFile;
    std::string replacedFileName;
    int occurIndex = 0;
    fileName.assign(av[1]);
    s.assign(av[2]);
    s1.assign(av[3]);
    myFile.open(fileName, std::ios::in);
    replacedFileName = fileName + ".replace";
    replacedFile.open(replacedFileName, std::ios::out);
    while (std::getline(myFile, line)) {
        std::cout << line << std::endl;
        if (line.find(s) != std::string::npos){
            occurIndex = line.find(s);
            while (occurIndex != -1){
                buffer = line.erase(occurIndex, s.length());
                buffer = line.insert(occurIndex, s1);
                occurIndex = line.find(s);
            }
            replacedFile << buffer;
            replacedFile << "\n";
        }
        else
        {
            replacedFile << line;
            replacedFile << "\n";
        }
    }
}