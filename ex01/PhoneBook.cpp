/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:12:05 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/12/13 13:32:31 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : n_contacts(0) {};

PhoneBook::~PhoneBook() {};

void PhoneBook::Add() {
    int i = this->n_contacts % 8;
    std::string input;
    std::getline(std::cin, input);
    agenda[i].setFirstName(input);
    this->n_contacts++;
    
};