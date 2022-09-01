/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:07:47 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/01 12:26:02 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    int contacts_num = 0;
    std::string temp;
    int index;
    PhoneBook c_PhoneBook;

    while (true){
        std::string choice;
        std::cout << "Choose an Operation (ADD or SEARCH)" << std::endl;
        std::getline(std::cin, choice);
        if (choice.empty())
        {
            clearerr(stdin);
            std::cin.clear();
        }
        else if (choice == "ADD")
        {
            if (c_PhoneBook.requestContact(contacts_num))
                contacts_num++;
            if (contacts_num > MAX_CONTACTS - 1)
                contacts_num = 0;
        }
        else if (choice == "SEARCH")
        {
            c_PhoneBook.displayAllContacts(contacts_num);
            std::cout << "Insert the id of the Contact (1 indexed!)" << std::endl;
            int index;
            std::cin >> index;
            while (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Insert the id of the Contact (1 indexed!)" << std::endl;
                std::cin >> index;
            }
            c_PhoneBook.searchContact(index - 1);
            std::cin.ignore();
            std::cin.clear();
        }
        else if (choice == "EXIT")
            c_PhoneBook.exitPhoneBook();
        else
            std::cerr << "Invalid Choice" << std::endl;
    }
}
