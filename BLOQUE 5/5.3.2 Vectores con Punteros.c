//Calcular las probabilidades de que salgan cada uno de los números de un dado con un vector usando punteros.
//Calcular con 10000 iteraciones.

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void sorteo( int *vec);
void imprimir(int *b);

void sorteo(int *vec){
    
    srand(time(NULL));//Para crear números aleatorios.

    for(int i = 0; i < 10000; i++){
        int aux = rand()%6; //'rand%6' es para sacar un número aleatorio  del 0 al 5.
        
        switch (aux){
        case 0: *(vec+aux) += 1; break;
        case 1: *(vec+aux) += 1; break;
        case 2: *(vec+aux) += 1; break;
        case 3: *(vec+aux) += 1; break;
        case 4: *(vec+aux) += 1; break;
        case 5: *(vec+aux) += 1; break;
        default: break;
        }
    }
    imprimir(vec);
}

void imprimir(int *b){
    
    float p;

    printf("\n\n");
    for(int i = 0; i < 6; i++){
        p = (*(b+i)*100)/10000.;
        printf("La probabilidad de que el número %i salga es de: %.4f.\n\n", i+1, p);
    }
    printf("\n");
}

int main(){
    int contador[] = {0, 0, 0, 0, 0, 0};//Usamos este vector como un contador.

    sorteo(contador);

    return 0;
}