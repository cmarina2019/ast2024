#include "employee.h"

Employee::Employee(std::string nif, int id, std::string name, std::string pass, UserType userType)
    : User(nif, id, name, pass, userType) {}
