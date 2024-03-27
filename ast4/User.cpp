#include "User.h"

User::User(std::string nif, int id, std::string name, std::string pass, UserType userType)
    : NIF(nif), ID(id), Name(name), password(pass), type(userType) {}

std::string User::getName() const {
    return Name;
}

int User::getID() const {
    return ID;
}

std::string User::getNIF() const {
    return NIF;
}

std::string User::getPassword() const {
    return password;
}

void User::setPassword(const std::string &pass) {
    password = pass;
}

std::string User::getTypeString() const {
    switch (type) {
        case UserType::ADMIN:
            return "Admin";
        case UserType::EMPLOYEE:
            return "Employee";
        default:
            return "Error: Unknown user type";
    }
}
