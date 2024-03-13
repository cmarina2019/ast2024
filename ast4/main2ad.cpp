#include <iostream>
#include <string>
#include <limits>
#include "admin.h"
#include "employee.h"

void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void adminMenu(Admin& admin) {
    int choice = -1;

    while (choice != 0) {
        std::cout << "\nAdministrator Menu:\n";
        std::cout << "1. Add User\n";
        std::cout << "2. Remove User\n";
        std::cout << "3. View User List\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string nif, name;
                int id;
                std::cout << "Enter the user's NIF: ";
                std::cin >> nif;
                std::cout << "Enter the user's ID: ";
                std::cin >> id;
                std::cout << "Enter the user's name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                User* newUser = new Employee(nif, id, name);
                admin.AddUser(newUser);
                std::cout << "User added successfully." << std::endl;
                break;
            }
            case 2: {
                int userID;
                std::cout << "Enter the ID of the user to remove: ";
                std::cin >> userID;
                admin.Remove(userID);
                std::cout << "User removed successfully." << std::endl;
                break;
            }
            case 3:
                admin.PrintUser();
                break;
            case 0:
                std::cout << "Exiting administrator menu..." << std::endl;
                break;
            default:
                std::cout << "Invalid option. Please select a valid option." << std::endl;
                break;
        }
    }
}

int main() {
    int userID;
    std::string employeeNIF, employeeName;

    std::cout << "Welcome! Please enter your ID: ";
    while (!(std::cin >> userID)) {
        std::cout << "Invalid input. Please enter an integer." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if (userID == 1) {
        Admin admin("99999Z", 1, "Admin");
        std::cout << "Hello Administrator!" << std::endl;
        adminMenu(admin);
    } else {
        std::cout << "Welcome! Please enter your NIF: ";
        std::cin >> employeeNIF;
        std::cout << "Please enter your name: ";
        std::cin.ignore();
        std::getline(std::cin, employeeName);
        Employee employee(employeeNIF, userID, employeeName);
        std::cout << "Welcome, " << employee.getName() << "!" << std::endl;
        // Employee logic...
    }

    return 0;
}
