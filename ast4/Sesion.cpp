#include "Sesion.h"
#include <chrono>

Sesion::Sesion() {
    addTimeStamp();
}

std::date::sys_time Sesion::getTimeStamp() const {
    return timeStamp;
}

void Sesion::addTimeStamp() {
    timeStamp = std::chrono::system_clock::now();
}