/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 12:23:00 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/12/13 13:12:39 by fsuguiur         ###   ########.fr       */
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

Contact::~Contact() {};

std::string Contact::getFirstName() {
    return this->first_name;
};

std::string Contact::getLastName() {
    return this->last_name;
};

std::string Contact::getNickname() {
    return this->nickname;
};

std::string Contact::getPhoneNumber() {
    return this->phone_number;
};

std::string Contact::getDarkSecret() {
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