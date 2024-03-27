#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "User.h"

class Employee : public User {
public:
    Employee(std::string nif, int id, std::string name, std::string pass, UserType userType);
};

#endif // EMPLOYEE_H
