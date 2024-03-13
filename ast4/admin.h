#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
#include <vector>

class Admin : public User {
private:
    std::vector<User*> userList;

public:
    Admin(std::string nif, int id, std::string name);

    void AddUser(User* user);
    void Remove(int userID);
    void PrintUser();

};

#endif // ADMIN_H