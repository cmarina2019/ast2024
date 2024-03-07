// humidity.h
#ifndef HUMIDITY_H
#define HUMIDITY_H

#include "sensor.h"

class Humidity : public Sensor {
private:
    enum class HumidityQuality {
        VeryBad,
        Bad,
        Neutral,
        Good,
        VeryGood

    };

public:
    Humidity();
    void getHumidity();
};

#endif // HUMIDITY_H
