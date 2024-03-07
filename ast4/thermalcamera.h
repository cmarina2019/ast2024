#ifndef THERMALCAMERA_H
#define THERMALCAMERA_H

#include "sensor.h"

class ThermalCamera : public Sensor {
public:
    ThermalCamera();  // Constructor
    void getThermalCamera();  // Generar un número aleatorio
};

#endif 