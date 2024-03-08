#include "dashboard.h"
#include "sensor.h"
#include "temperature.h"
#include "humidity.h"
#include "lightlevel.h"
#include "thermalcamera.h"
#include "rgbcamera.h"
#include "airquality.h"


#include <iostream>

Dashboard::Dashboard() {
    Sensor();
    temperature = Temperature();
    humidity = Humidity();
    lightlevel = LightLevel();
    thermalcamera = ThermalCamera();
    rgbcamera = RGBCamera();
    airquality = AirQuality();
}

void Dashboard::showMenu() {
    int option = -1;

    while (option != 0) {
        std::cout << "Seleccione el sensor que desea consultar:\n";
        std::cout << "1. Temperature\n";
        std::cout << "2. Humidity\n";
        std::cout << "3. Lightlevel\n";
        std::cout << "4. Thermal Camera\n";
        std::cout << "5. RGB Camera\n";
        std::cout << "6. Air Quality\n";
        std::cout << "0. Salir\n";
        std::cout << "Ingrese su opcion: ";

        std::cin >> option;

        switch (option) {
            case 1:
                temperature.getTemperature();
                std::cout << "Temperatura: " << temperature.obtenerLectura() << "ºC" << "\n";
                break;
            case 2:
                humidity.getHumidity();
                break;
            case 3:
                lightlevel.getLightLevel();
                std::cout << "LightLevel: " << lightlevel.obtenerLectura() << "\n";
                break;
            case 4:
                std::cout << "ThermalCamera: " << "\n";
                thermalcamera.getThermalCamera();
                break;
            case 5:
                std::cout << "RGBCamera: " << "\n";
                rgbcamera.getRGBCamera();
                break;
            case 6:
                airquality.getAirQuality();
                std::cout << "Air Quality: " << airquality.obtenerLectura() << "\n";
                break;
            case 0:
                std::cout << "Saliendo...\n";
                break;
            default:
                std::cout << "Opcion no valida. Por favor, seleccione una opcion del menu.\n";
                break;
        }

        std::cout << "\n";
    }
}
