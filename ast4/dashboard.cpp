#include "dashboard.h"
#include "sensor.h"
#include "temperature.h"
#include "humidity.h"
#include <iostream>

Dashboard::Dashboard() {
    sensor = Sensor();
    temperature = Temperature();
    humidity = Humidity();
}

void Dashboard::showMenu() {
    int option = -1;

    while (option != 0) {
        std::cout << "Seleccione el sensor que desea consultar:\n";
        std::cout << "1. Temperature\n";
        std::cout << "2. Humidity\n";
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
                std::cout << "Humedad: " << humidity.obtenerLectura() << "\n";
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
