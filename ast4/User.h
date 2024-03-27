#ifndef USER_H
#define USER_H

#include <string>

enum class UserType {
    ADMIN,
    EMPLOYEE
};

class User {
private:
    std::string NIF;
    int ID;
    std::string Name;
    std::string password;
    UserType type; // Nuevo miembro para almacenar el tipo de usuario

public:
    User(std::string nif, int id, std::string name, std::string pass, UserType userType);

    std::string getName() const;
    int getID() const;
    std::string getNIF() const;
    std::string getPassword() const;
    void setPassword(const std::string &pass);
    std::string getTypeString() const; // Método para obtener el tipo de usuario
};

#endif // USER_H
