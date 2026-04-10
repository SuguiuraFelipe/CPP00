/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:12:05 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/04/10 16:59:34 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : n_contacts(0) {};

PhoneBook::~PhoneBook() {};

void PhoneBook::Add() {
    std::string input;
    int i = this->n_contacts % 8;
    Contact temp_contact;
    
    std::cout << "Add Contact" << std::endl;
    std::cout << "First Name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "ERROR: The contact can’t have empty fields. Aborted." << std::endl;
        return ;
    }
    temp_contact.setFirstName(input);
    
    std::cout << "Last Name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "ERROR: The contact can’t have empty fields. Aborted." << std::endl;
        return ;
    }
    temp_contact.setLastName(input);

    std::cout << "Nickame: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "ERROR: The contact can’t have empty fields. Aborted." << std::endl;
        return ;
    }
    temp_contact.setNickname(input);
    
    std::cout << "Phone Number: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "ERROR: The contact can’t have empty fields. Aborted." << std::endl;
        return ;
    }
    temp_contact.setPhoneNumber(input);

    std::cout << "Dark Secret: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "ERROR: The contact can’t have empty fields. Aborted." << std::endl;
        return ;
    }
    temp_contact.setDarkSecret(input);

    this->agenda[i] = temp_contact;
    this->n_contacts++;
    std::cout << "CONTACT ADDED SUCCESSFULLY to index " << i << "." << std::endl;
};

std::string PhoneBook::FormatTable(std::string str) {
	int len;
	len = str.length();
	if(len > 10)
		return str.substr(0,9) + ".";
	return str;
};

void PhoneBook::Search() {
    if(this->n_contacts == 0) {
        std::cout << "There are no users in the database. ";
        std::cout << "Please add one and try again." << std::endl;
        return;
    }
    std::cout << "\n+----------+----------+----------+----------+\n";
    std::cout << "|" << std::setw(10) << "Index" 
              << "|" << std::setw(10) << "First Name"
              << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) << "Nickname"
              << "|\n";
    std::cout << "+----------+----------+----------+----------+\n";
    int display_tabble;
    if(this->n_contacts > 8)
        display_tabble = 8;
    else
        display_tabble = this->n_contacts;
    for(int i = 0; i < display_tabble; ++i) { 
        std::string firstn = FormatTable(this->agenda[i].getFirstName());
        std::string lastn = FormatTable(this->agenda[i].getLastName());
        std::string nickn = FormatTable(this->agenda[i].getNickname());

        std::cout << "|" << std::setw(10) << i
                  << "|" << std::setw(10) << firstn
                  << "|" << std::setw(10) << lastn
                  << "|" << std::setw(10) << nickn
                  << "|\n";
    }
    std::cout << "+----------+----------+----------+----------+\n";
    std::cout << "\nSelect the index number to see more info" << std::endl;
	
    std::string input;
    std::getline(std::cin, input);
	if (input.length() != 1) {
        std::cerr << "Invalid ID: Index and must be a single digit." << std::endl;
        return ;
    }
    char index_char = input[0];
    if (index_char < '0' || index_char > '9') {
        std::cerr << "Invalid ID: Character entered is not a digit." << std::endl;
        return ;
    }
    int selection = atoi(input.c_str());
    if(selection < 0 || selection >= display_tabble) { 
        std::cerr << "Invalid ID" << std::endl;
        return ;
    }
    std::cout << "First name: " << agenda[selection].getFirstName() << std::endl;
    std::cout << "Last name: " << agenda[selection].getLastName() << std::endl;
    std::cout << "Nickname: " << agenda[selection].getNickname() << std::endl;
    std::cout << "PhoneNumber: " << agenda[selection].getPhoneNumber() << std::endl;
    std::cout << "DarkestSecret: " << agenda[selection].getDarkSecret() << std::endl;
}

bool PhoneBook::Exit() {
	std::cout << "Turning off the PhoneBook..." << std::endl;
	sleep(1);
	std::cout << "GoodBye !" << std::endl;
	return true;
}