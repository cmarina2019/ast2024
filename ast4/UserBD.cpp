#include "UserBD.h"

UserBD::UserBD() {}

User UserBD::loadUser(const std::string& name, int NIF, int ID) {
    // Search for user with matching name, NIF, and ID
    // Return user if found, or null/empty user if not
}

void UserBD::saveUser(const User& user) {
    // Save user to database
}