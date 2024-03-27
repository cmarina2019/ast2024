#ifndef LIGHTLEVEL_H
#define LIGHTLEVEL_H

#include "Sensor.h"

class LightLevel : public Sensor {
public:
    LightLevel();  // Constructor
    void getLightLevel();  // Generar un número aleatorio
};

#endif

