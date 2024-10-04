//Hacer un cronómetro que comience cuando se pulse la tecla espacio.

#include <stdio.h>
#include <windows.h>
//#include <unistd.h> para Linux (En reemplazo para la librería <windows.h> en Windows).

int main(){
    int hor, min, seg, x = 1000; 
    /*
    'x' Sí o sí vale 1000 para que avance por segundo.
    Si quisieramos que vaya más rápido, debemos achicar el número a 100, por ejemplo.
    */

    for(hor = 0; hor<24; hor++){
        for(min = 0; min<60;min++){
            for(seg = 0; seg<60; seg++){
                printf("%02i:%02i:%02i\r", hor, min, seg);
                Sleep(x);
                //usleep(1000 * x); Para Linux (En reemplazo para el comando 'Sleep()' en Windows).
            }
        }
    }

    return 0;
}