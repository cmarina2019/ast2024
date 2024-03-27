#include "ThermalCamera.h"
#include "Sensor.h"
#include <cstdlib>  // Necesario para la función rand
#include <ctime>    // Necesario para la función time
#include <iostream> // Necesario para la salida estándar (cout)

ThermalCamera::ThermalCamera() {
    // Inicializamos la semilla del generador de números aleatorios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void ThermalCamera::getThermalCamera() {
    // Utilizamos una matriz de 3x3 para almacenar los valores generados
    int values_[3][3];

    // Generamos y mostramos los valores aleatorios en un bucle anidado
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            values_[i][j] = rand() % 100;
            std::cout << values_[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Puedes usar los valores generados según tus necesidades
    // Por ejemplo, establecerLectura(values_[0][0]);
}
