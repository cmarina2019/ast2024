#ifndef LIGHTLEVEL_H
#define LIGHTLEVEL_H

#include "sensor.h"

class LightLevel : public Sensor {
public:
    LightLevel();  // Constructor
    void getLightLevel();  // Generar un número aleatorio
};

#endif

