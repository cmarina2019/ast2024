#include "admin.h"
#include <iostream>

Admin::Admin(std::string nif, int id, std::string name, std::string pass, UserType userType)
    : User(nif, id, name, pass, userType) {}

void Admin::AddUser(User* user) {
    userList.push_back(user);
}

void Admin::Remove(int userID) {
    for (auto it = userList.begin(); it != userList.end(); ++it) {
        if ((*it)->getID() == userID) {
            userList.erase(it);
            break;
        }
    }
}

void Admin::PrintUser() {
    std::cout << "User List:" << std::endl;
    for (const auto& user : userList) {
        std::cout << "Name: " << user->getName() << ", ID: " << user->getID() << ", NIF: " << user->getNIF() << ", Password: " << user->getPassword() << ", Type: " << user->getTypeString() << std::endl;
    }
}
