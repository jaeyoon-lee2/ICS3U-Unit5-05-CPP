// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon (Jay) Lee
// Created on: Nov 2019
// This program gets a users address and prints out their formal address

#include <iostream>
#include <string>
#include <algorithm>


std::string GetAddress(std::string firstName, std::string lastName,
                       std::string streetAddress, std::string city,
                       std::string province, std::string firstPostalCode,
                       std::string lastPostalCode, std::string aptNumber = "") {
    // return the address in capital letters

    std::string address;

    address = firstName + " " + lastName + '\n';
    if (aptNumber.size() != 0) {
        address = address + aptNumber + "-";
    }
    address = address+streetAddress+'\n'+city+" "+province+"  "+
              firstPostalCode + " " + lastPostalCode;

    return address;
}


main() {
    // this function gets a users address and prints out their formal address

    std::string firstName;
    std::string lastName;
    std::string streetAddress;
    std::string question;
    std::string aptNumber = "";
    std::string city;
    std::string province;
    std::string firstPostalCode;
    std::string lastPostalCode;
    std::string address;

    // input
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;
    std::cout << "Enter your street address: ";
    std::cin >> streetAddress;
    std::cout << "Do you have the apartment number? (y/n): ";
    std::cin >> question;
    if (question == "Y" || question == "YES") {
        std::cout << "Enter your apartment number: ";
        std::cin >> aptNumber;
    }
    std::cout << "Enter your city: ";
    std::cin >> city;
    std::cout << "Enter your province: ";
    std::cin >> province;
    std::cout << "Enter your first postal code: ";
    std::cin >> firstPostalCode;
    std::cout << "Enter your last postal code: ";
    std::cin >> lastPostalCode;
    std::cout << std::endl;

    if (aptNumber != "") {
        address = GetAddress(firstName, lastName, streetAddress, city,
                             province, firstPostalCode, lastPostalCode,
                             aptNumber);
    } else {
        address = GetAddress(firstName, lastName, streetAddress, city,
                             province, firstPostalCode, lastPostalCode);
    }
    std::transform(address.begin(), address.end(), address.begin(), ::toupper);
    std::cout << address;
}
