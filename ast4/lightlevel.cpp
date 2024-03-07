#include "lightlevel.h"
#include "sensor.h"
#include <cstdlib>  // Necesario para la función rand
#include <ctime>    // Necesario para la función time

LightLevel::LightLevel() {
    // Inicializamos la semilla del generador de números aleatorios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void LightLevel::getLightLevel() {
    // Generamos un número aleatorio de temperatura entre 0 y 100 con un decimal
    int lightlevel = rand() % 101;  // Genera un número aleatorio entre 0 y 100 sin decimales

    
    // Utilizamos la función protegida de Sensor para establecer la lectura
    establecerLectura(lightlevel);
}
