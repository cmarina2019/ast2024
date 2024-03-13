#include "user.h"

User::User(std::string nif, int id, std::string name) : NIF(nif), ID(id), Name(name) {}

std::string User::getName() const {
    return Name;
}

int User::getID() const {
    return ID;
}

std::string User::getNIF() const {
    return NIF;
}
