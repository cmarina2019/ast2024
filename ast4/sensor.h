#ifndef SENSOR_H
#define SENSOR_H

class Sensor {
public:
    Sensor();  // Constructor
    double obtenerLectura() const;  // Función para obtener la lectura del sensor
protected:
    void establecerLectura(double lectura);  // Función para establecer la lectura del sensor
    
private:
    double lectura;  // Miembro privado para almacenar la lectura del sensor
};

#endif // SENSOR_H
