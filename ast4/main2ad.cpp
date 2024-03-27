#include <iostream>
#include <string>
#include <limits>
#include "Admin.h"
#include "Employee.h"
#include "User.h"

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
        while (!(std::cin >> choice)) {
            std::cout << "Invalid input. Please enter a valid integer choice: ";
            clearInputBuffer();
        }

        switch (choice) {
            case 1: {
                std::string nif, name, pass; // Agregamos 'pass'
                int id, userType;
                std::cout << "Enter the user's NIF: ";
                std::cin >> nif;

                std::cout << "Enter the user's ID: ";
                while (!(std::cin >> id)) {
                    std::cout << "Invalid input. Please enter a valid integer for the ID: ";
                    clearInputBuffer();
                }

                std::cout << "Enter the user's name: ";
                clearInputBuffer(); // Limpiar el búfer de nueva línea antes de leer el nombre
                std::getline(std::cin, name);

                std::cout << "Enter the user's password: ";
                std::cin >> pass;

                std::cout << "Enter the user's type (1 for Admin, 2 for Employee): ";
                while (!(std::cin >> userType) || (userType != 1 && userType != 2)) {
                    std::cout << "Invalid input. Please enter 1 for Admin or 2 for Employee: ";
                    clearInputBuffer();
                }

                if (userType == 1) {
                    User* newUser = new Admin(nif, id, name, pass, UserType::ADMIN);
                    admin.AddUser(newUser);
                    std::cout << "Admin added successfully." << std::endl;
                } else {
                    User* newUser = new Employee(nif, id, name, pass, UserType::EMPLOYEE);
                    admin.AddUser(newUser);
                    std::cout << "Employee added successfully." << std::endl;
                }
                break;
            }
            case 2: {
                int userID;
                std::cout << "Enter the ID of the user to remove: ";
                while (!(std::cin >> userID)) {
                    std::cout << "Invalid input. Please enter a valid integer for the user ID: ";
                    clearInputBuffer();
                }

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
                clearInputBuffer(); // Limpiar el búfer en caso de opción inválida
                break;
        }
    }
}

int main() {
    std::string adminPassword = "admin123"; // Contraseña del administrador
    std::string employeePassword = "employee456"; // Contraseña del empleado

    Admin admin("123456Z", 1, "Admin", adminPassword, UserType::ADMIN);
    Employee* employee = new Employee("789012X", 2, "Employee", employeePassword, UserType::EMPLOYEE); // Crear un empleado en el heap

    // Agregar el empleado a la lista de usuarios del administrador
    admin.AddUser(employee);

    std::string inputPassword;
    int userID;

    std::cout << "Welcome! Please enter your ID: ";
    while (!(std::cin >> userID)) {
        std::cout << "Invalid input. Please enter a valid integer for the ID: ";
        clearInputBuffer();
    }

    std::cout << "Please enter your password: ";
    std::cin >> inputPassword;

    if (userID == 1 && inputPassword == adminPassword) {
        std::cout << "Hello Administrator!" << std::endl;
        adminMenu(admin);
    } else if (userID == 2 && inputPassword == employeePassword) {
        std::cout << "Welcome, Employee!" << std::endl;
        // Aquí puedes continuar con la lógica para el empleado si es necesario
    } else {
        std::cout << "Invalid credentials." << std::endl;
    }

    // Limpiar la memoria del empleado creado en el heap
    delete employee;

    return 0;
}
