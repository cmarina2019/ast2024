#ifndef USER_H
#define USER_H

#include <string>

class User {
protected:
    std::string NIF;
    int ID;
    std::string Name;

public:
    User(std::string nif, int id, std::string name);

    std::string getName() const;
    int getID() const;
    std::string getNIF() const;
};

#endif // USER_H
