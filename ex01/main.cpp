/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 11:59:22 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/05 17:36:40 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main() {
    PhoneBook phonebook;
    while(1)
    {
        std::cout << "Please write one of the options and press enter: " << std::endl;
        std::cout << "ADD, SEARCH or EXIT\n" << std::endl;
        std::string input;
        
        if (!std::getline(std::cin, input))
            break;
        if(input == "ADD") {
            std::system("clear"); 
            phonebook.Add();
        }
        else if(input == "SEARCH") {
            std::system("clear");
            phonebook.Search();
        }
        else if(input == "EXIT")
        {
            std::system("clear"); 
            if(phonebook.Exit())
                break;
        }
    }
    return 0;
}

