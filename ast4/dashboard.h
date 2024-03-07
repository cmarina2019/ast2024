// dashboard.h
#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "sensor.h"
#include "temperature.h"
#include "humidity.h"

class Dashboard {
public:
    Dashboard();
    void showMenu();

private:
    Sensor sensor;
    Temperature temperature;
    Humidity humidity;
};

#endif // DASHBOARD_H
