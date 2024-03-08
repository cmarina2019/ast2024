#include "airquality.h"
#include "sensor.h"
#include <cstdlib>  // Necesario para la función rand
#include <ctime>    // Necesario para la función time

AirQuality::AirQuality() {
    // Inicializamos la semilla del generador de números aleatorios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void AirQuality::getAirQuality() {
    // Generamos un número aleatorio de temperatura entre 0 y 100 con un decimal
    int airquality = rand() % 101;  // Genera un número aleatorio entre 0 y 100 sin decimales

    
    // Utilizamos la función protegida de Sensor para establecer la lectura
    establecerLectura(airquality);
}
