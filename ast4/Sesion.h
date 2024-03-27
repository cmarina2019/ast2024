#ifndef SESION_H
#define SESION_H

#include <string>
#include <date>
#include "User.h"

class Sesion {
public:
    Sesion();
    std::date::sys_time getTimeStamp() const;
    void addTimeStamp();
private:
    std::date::sys_time timeStamp;
};

#endif