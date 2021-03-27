#include <iostream>
using namespace std;

int main(){
    int *puntero;
    int n=10;
    puntero=&n;

    printf("Contenido del puntero %d",*puntero);
    printf("\n Dirccion de memoria a la que apunta el  puntero: %p",*puntero);
    printf("\n Direccion de memoria de la variable N: %p",n);
    printf("\n Direccion de memoria de la variable putero: %p",&puntero);
    printf("\n Tamaño de memoria utilizado por la variable N: %u",sizeof(n));
    
    printf("FIN");
}