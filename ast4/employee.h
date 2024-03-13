#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "user.h"

class Employee : public User {
public:
    Employee(std::string nif, int id, std::string name);
};

#endif // EMPLOYEE_H
