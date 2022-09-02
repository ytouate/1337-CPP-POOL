/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:07:47 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/01 17:18:00 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int PhoneBook::getContactCount(void) const
{
    return (this->contact_count);
}

void    get_index(int& index)
{
    std::cin >> index;
    while (std::cin.fail())
    {
        if (std::cin.eof())
        {
            clearerr(stdin);
            std::cin.clear();
            std::cin.ignore();
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Insert the id of the Contact (1 indexed!)" << std::endl;
        std::cin >> index;
    }
}

int main()
{
    int contacts_num = 0;
    std::string temp;
    int index;
    int flag = 0;
    PhoneBook c_PhoneBook;
    c_PhoneBook.setContactCount(0);
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
            {
                contacts_num++;
                flag == 0 ? c_PhoneBook.setContactCount(contacts_num) : c_PhoneBook.setContactCount(8);
            }
            if (contacts_num == 8)
            {
                flag = 1;
                contacts_num = 0;
            }
        }
        else if (choice == "SEARCH")
        {
            c_PhoneBook.displayAllContacts();
            std::cout << "Insert the id of the Contact (1 indexed!)" << std::endl;
            get_index(index);
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
