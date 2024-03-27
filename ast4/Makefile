# *****************************************************
# Christian Marina Villasevil
# Makefile para compilar el programa
# *****************************************************

CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

programa: Humidity.o Temperature.o Sensor.o Dashboard.o main.o LightLevel.o ThermalCamera.o RGBCamera.o AirQuality.o
>$(CC) $(CFLAGS) -o programa Humidity.o Temperature.o Sensor.o Dashboard.o main.o LightLevel.o ThermalCamera.o RGBCamera.o AirQuality.o

Humidity.o: Humidity.cpp Humidity.h Sensor.h
>$(CC) $(CFLAGS) -c Humidity.cpp

Temperature.o: Temperature.cpp Temperature.h Sensor.h
>$(CC) $(CFLAGS) -c Temperature.cpp

Sensor.o: Sensor.cpp Sensor.h
>$(CC) $(CFLAGS) -c Sensor.cpp

Dashboard.o: Dashboard.cpp Dashboard.h Humidity.h Temperature.h LightLevel.h ThermalCamera.h RGBCamera.h AirQuality.h
>$(CC) $(CFLAGS) -c Dashboard.cpp

main.o: main.cpp Dashboard.h
>$(CC) $(CFLAGS) -c main.cpp

LightLevel.o: LightLevel.cpp LightLevel.h Sensor.h
>$(CC) $(CFLAGS) -c LightLevel.cpp

Thermalcamera.o: ThermalCamera.cpp ThermalCamera.h Sensor.h
>$(CC) $(CFLAGS) -c ThermalCamera.cpp

RGBCamera.o: RGBCamera.cpp RGBCamera.h Sensor.h
>$(CC) $(CFLAGS) -c RGBCamera.cpp

AirQuality.o: AirQuality.cpp AirQuality.h Sensor.h
>$(CC) $(CFLAGS) -c AirQuality.cpp

clean:
>rm -f *.o programa

