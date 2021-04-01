#include <iostream>
//Ortega Leandro Francisco
//funcion cuadrado
int cuadrado(int a){
    int b;
    b=a*a;
    return b;
}
//funcion cuadrado con punteors
void cuadrado2(int *a){
    *a=(*a)*(*a);
}

//funcion mosstrar valores
void mostrarvalor(int *p){

    printf("\nc) Contenido del puntero %d",*p);
    printf("\n Dirccion de memoria a la que apunta el  puntero: %p",*p);
}

//funcion invertir
void invertir(int *a,int*b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

//funcion orden
void orden(int *a, int *b){
    int aux;
    if(*a < *b){
        printf("\n E)valores ordenados de menor a menor a mayor \n a=%d \n b=%d",*a,*b);
    }
    else{
            if (*b<*a)
            {   aux=*a;
                *a=*b;
                *b=*a;
                printf("\n D)orden creciente:\n a=%d \n b=%d",*a,*b);
            }else{
                    printf("\n D) a y b son iguales\n a=%d \n b=%d ",*a,*b);
            }
            
    }

}

