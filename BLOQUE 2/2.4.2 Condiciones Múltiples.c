/*
Esribe un programa que acepte tres números (horas, minutos y segundos) y devuelva la hora que será
dentro de un segundo, controlando que sea una hora exacta
*/

#include <stdio.h>

int main(){
    int x, y, z;

    printf("Ingrese la hora: \n");
    scanf(" %i", &x);

    printf("Ingrese los minutos: \n");
    scanf(" %i", &y);

    printf("Ingrese los segundos: \n");
    scanf(" %i", &z);

    if(x<24 && y<60 && z<60){
        if(z==59){
            y++;
            z = 00;
            if(y==60){
                x++;
                y = 00;
                if(x==24){
                    x = 00;
                    
                }
            }
        }else{
            z++;
        }
        printf("\n La hora exacta más 1 segundo es: %i:%i:%i \n", x, y, z);
    }else{
        printf("\nLos valores introducidos son incorrectos. Intente de nuevo.\n");
    }

    return 0;
}


