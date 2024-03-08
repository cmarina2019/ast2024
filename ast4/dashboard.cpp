#include "dashboard.h"
#include "sensor.h"
#include "temperature.h"
#include "humidity.h"
#include "lightlevel.h"
#include "thermalcamera.h"
#include "rgbcamera.h"
#include "airquality.h"

#include <iostream>
#include <limits>

Dashboard::Dashboard() {
    Sensor();
    temperature = Temperature();
    humidity = Humidity();
    lightlevel = LightLevel();
    thermalcamera = ThermalCamera();
    rgbcamera = RGBCamera();
    airquality = AirQuality();
}

void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Dashboard::showMenu() {
    int option = -1;

    while (option != 0) {
        system("clear");  // Utiliza "cls" en lugar de "clear" si estás en Windows

        std::cout << "=====================\n";
        std::cout << "    MENÚ DE SENSORES   \n";
        std::cout << "=====================\n";
        std::cout << "Seleccione el sensor que desea consultar:\n";
        std::cout << "1. Temperatura\n";
        std::cout << "2. Humedad\n";
        std::cout << "3. Nivel de Luz\n";
        std::cout << "4. Cámara Térmica\n";
        std::cout << "5. Cámara RGB\n";
        std::cout << "6. Calidad del Aire\n";
        std::cout << "0. Salir\n";
        std::cout << "Ingrese su opción: ";

        while (!(std::cin >> option) || option < 0 || option > 6) {
            clearInputBuffer();
            std::cout << "Entrada inválida. Por favor, ingrese un número válido del menú.\n";
            std::cout << "Ingrese su opción: ";
        }

        clearInputBuffer();

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
                std::cout << "Nivel de Luz: " << lightlevel.obtenerLectura() << "\n";
                break;
            case 4:
                std::cout << "Cámara Térmica: " << "\n";
                thermalcamera.getThermalCamera();
                break;
            case 5:
                std::cout << "Cámara RGB: " << "\n";
                rgbcamera.getRGBCamera();
                break;
            case 6:
                airquality.getAirQuality();
                std::cout << "Calidad del Aire: " << airquality.obtenerLectura() << "\n";
                break;
            case 0:
                std::cout << "Saliendo...\n";
                break;
            default:
                std::cout << "Opción no válida. Por favor, seleccione una opción del menú.\n";
                break;
        }

        // Añade una pausa visual antes de mostrar nuevamente el menú
        std::cout << "\nPresione Enter para continuar...";
        std::cin.get();
    }
}
