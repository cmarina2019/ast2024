#ifndef USERBD_H
#define USERBD_H

#include <string>
#include <vector>
#include "User.h"

class UserBD {
public:
    UserBD();
    User loadUser(const std::string& name, int NIF, int ID);
    void saveUser(const User& user);
private:
    std::vector<User> users;
};

#endif