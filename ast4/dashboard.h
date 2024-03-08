// dashboard.h
#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "sensor.h"
#include "temperature.h"
#include "humidity.h"
#include "lightlevel.h"
#include "thermalcamera.h"
#include "rgbcamera.h"
#include "airquality.h"




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
