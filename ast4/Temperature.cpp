#include "Temperature.h"
#include "Sensor.h"
#include <cstdlib>  // Necesario para la función rand
#include <ctime>    // Necesario para la función time

Temperature::Temperature() {
    // Inicializamos la semilla del generador de números aleatorios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void Temperature::getTemperature() {
    // Generamos un número aleatorio de temperatura entre 0 y 100 con un decimal
    float temperature = static_cast<float>(rand() % 1001) / 10.0;
    
    // Utilizamos la función protegida de Sensor para establecer la lectura
    establecerLectura(temperature);
}
