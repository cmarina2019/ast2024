// humidity.cpp
#include "humidity.h"
#include "sensor.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Humidity::Humidity() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void Humidity::getHumidity() {
    // Generate a random humidity value between 0 and 100 with one decimal place
    float humidity = static_cast<float>(rand() % 1001) / 10.0;

    // Determine the humidity quality
    HumidityQuality quality;
    if (humidity < 15.0) {
        quality = HumidityQuality::VeryBad;
    } else if (humidity >= 15.0 && humidity < 30.0) {
        quality = HumidityQuality::Bad;
    } else if (humidity >= 30.0 && humidity <= 70.0) {
        quality = HumidityQuality::Neutral;
    } else if (humidity > 70.0 && humidity <= 85.0) {
        quality = HumidityQuality::Good;
    } else {
        quality = HumidityQuality::VeryGood;
    }

    // Display the humidity quality
    switch (quality) {
        case HumidityQuality::VeryBad:
            std::cout << "The humidity quality is very bad." << std::endl;
            break;
        case HumidityQuality::Bad:
            std::cout << "The humidity quality is bad." << std::endl;
            break;
        case HumidityQuality::Neutral:
            std::cout << "The humidity quality is neutral." << std::endl;
            break;
        case HumidityQuality::Good:
            std::cout << "The humidity quality is good." << std::endl;
            break;
        case HumidityQuality::VeryGood:
            std::cout << "The humidity quality is very good." << std::endl;
            break;
    }
}
