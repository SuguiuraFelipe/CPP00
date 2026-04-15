/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 12:23:00 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/04/15 14:11:36 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(
    std::string first_name,
    std::string last_name,
    std::string nickname,
    std::string phone_number,
    std::string dark_secret
){
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->dark_secret = dark_secret;
};

Contact::Contact() {};
Contact::~Contact() {};

std::string Contact::getFirstName() const {
    return this->first_name;
};

std::string Contact::getLastName() const {
    return this->last_name;
};

std::string Contact::getNickname() const {
    return this->nickname;
};

std::string Contact::getPhoneNumber() const {
    return this->phone_number;
};

std::string Contact::getDarkSecret() const {
    return this->dark_secret;
};

void Contact::setFirstName(std::string first_name) {
    this->first_name = first_name;
};

void Contact::setLastName(std::string last_name) {
    this->last_name = last_name;
};

void Contact::setNickname(std::string nickname) {
    this->nickname = nickname;
};

void Contact::setPhoneNumber(std::string phone_number) {
    this->phone_number = phone_number;
};

void Contact::setDarkSecret(std::string dark_secret) {
    this->dark_secret = dark_secret;
};