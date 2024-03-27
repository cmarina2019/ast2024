// dashboard.h
#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "Sensor.h"
#include "Temperature.h"
#include "Humidity.h"
#include "LightLevel.h"
#include "ThermalCamera.h"
#include "RGBCamera.h"
#include "AirQuality.h"




class Dashboard {
public:
    Dashboard();
    void showMenu();

private:
    Sensor sensor;
    Temperature temperature;
    Humidity humidity;
    LightLevel lightlevel;
    ThermalCamera thermalcamera;
    RGBCamera rgbcamera;
    AirQuality airquality;
};

#endif // DASHBOARD_H
