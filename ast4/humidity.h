// humidity.h
#ifndef HUMIDITY_H
#define HUMIDITY_H

#include "sensor.h"

class Humidity : public Sensor {
public:
    Humidity();
    void getHumidity(); // Cambié el nombre de la función para reflejar mejor su propósito
};

#endif // HUMIDITY_H
