# *****************************************************
# Tu nombre
# Makefile para compilar el programa
# *****************************************************

CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

programa: humidity.o temperature.o sensor.o dashboard.o main.o lightlevel.o thermalcamera.o rgbcamera.o
>$(CC) $(CFLAGS) -o programa humidity.o temperature.o sensor.o dashboard.o main.o lightlevel.o thermalcamera.o rgbcamera.o

humidity.o: humidity.cpp humidity.h sensor.h
>$(CC) $(CFLAGS) -c humidity.cpp

temperature.o: temperature.cpp temperature.h sensor.h
>$(CC) $(CFLAGS) -c temperature.cpp

sensor.o: sensor.cpp sensor.h
>$(CC) $(CFLAGS) -c sensor.cpp

dashboard.o: dashboard.cpp dashboard.h humidity.h temperature.h lightlevel.h thermalcamera.h rgbcamera.h
>$(CC) $(CFLAGS) -c dashboard.cpp

main.o: main.cpp dashboard.h
>$(CC) $(CFLAGS) -c main.cpp

lightlevel.o: lightlevel.cpp lightlevel.h sensor.h
>$(CC) $(CFLAGS) -c lightlevel.cpp

thermalcamera.o: thermalcamera.cpp thermalcamera.h sensor.h
>$(CC) $(CFLAGS) -c thermalcamera.cpp

rgbcamera.o: rgbcamera.cpp rgbcamera.h sensor.h
>$(CC) $(CFLAGS) -c rgbcamera.cpp

clean:
>rm -f *.o programa

