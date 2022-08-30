/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:35:52 by ytouate           #+#    #+#             */
/*   Updated: 2022/08/30 12:54:01 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    int contacts_num = 0;
    std::string temp;
    int index;
    PhoneBook c_PhoneBook;

    while (true){
        std::string choice;
        std::cout << "Choose an Operation among (ADD or SEARCH)" << std::endl;
        std::getline(std::cin, choice);
        if (choice.empty())
        {
            clearerr(stdin);
            std::cin.clear();
        }
        else if (choice == "ADD")
        {
            c_PhoneBook.requestContact(contacts_num);
            contacts_num++;
            if (contacts_num > MAX_CONTACTS - 1)
                contacts_num = 0;
        }
        else if (choice == "SEARCH")
        {
            std::cout << "Insert the id of the Contact (1 indexed!)" << std::endl;
            std::getline(std::cin, temp);
            int index = atoi(temp.c_str());
            c_PhoneBook.searchContact(index - 1);
        }
        else if (choice == "EXIT")
            c_PhoneBook.exitPhoneBook();
        else
            std::cerr << "Invalid Choice" << std::endl;
    }
}
