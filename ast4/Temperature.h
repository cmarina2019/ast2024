#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include "Sensor.h"

class Temperature : public Sensor {
public:
    Temperature();  // Constructor
    void getTemperature();  // Generar un número aleatorio de temperatura
};

#endif // TEMPERATURE_H
