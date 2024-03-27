#ifndef AIRQUALITY_H
#define AIRQUALITY_H

#include "Sensor.h"

class AirQuality : public Sensor {
public:
    AirQuality();  // Constructor
    void getAirQuality();  // Generar un número aleatorio
};

#endif

