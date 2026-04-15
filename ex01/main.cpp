/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 11:59:22 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/04/15 14:15:13 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
            phonebook.Add();
        }
        else if(input == "SEARCH") {
            phonebook.Search();
        }
        else if(input == "EXIT")
        {
            if(phonebook.Exit())
                break;
        }
    }
    return 0;
}

