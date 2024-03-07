// sensor.cpp
#include "sensor.h"
#include "string"


Sensor::Sensor() {
    lectura = 0.0;  // Inicializar la lectura del sensor
}

double Sensor::obtenerLectura() const {
    return lectura;  // Devolver la lectura actual del sensor
}

void Sensor::establecerLectura(double lectura) {
    this->lectura = lectura;  // Establecer la lectura del sensor con el valor proporcionado
}
