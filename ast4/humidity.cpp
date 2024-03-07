#include "humidity.h"
#include "sensor.h"
#include <cstdlib>  // Necesario para la función rand
#include <ctime>    // Necesario para la función time

Humidity::Humidity() {
    // Inicializamos la semilla del generador de números aleatorios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void Humidity::getHumidity() {
    // Generamos un número aleatorio de temperatura entre 0 y 100 con un decimal
    float humidity = static_cast<float>(rand() % 1001) / 10.0;
    
    // Utilizamos la función protegida de Sensor para establecer la lectura
    establecerLectura(humidity);
}
