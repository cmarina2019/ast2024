#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"
#include <vector>

class Admin : public User {
private:
    std::vector<User*> userList;

public:
    Admin(std::string nif, int id, std::string name, std::string pass, UserType userType);

    void AddUser(User* user);
    void Remove(int userID);
    void PrintUser();
};

#endif // ADMIN_H
