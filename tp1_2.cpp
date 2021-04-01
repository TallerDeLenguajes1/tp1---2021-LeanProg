#include <iostream>
#include "funciones.h"
using namespace std;



int main(){
    
    int n=10,ncuadrado;
    int a=105,b=5;
    ncuadrado=cuadrado(n);
    
    printf("\n A) Cuadrado de n a travez de parametros por valor: %d",ncuadrado); //punto A
    cuadrado2(&n);  //punto 2
    printf("\n B) Cuadrado de n con funcion void usando parametros por referencia: %d",n);
    n=10;
    mostrarvalor(&n); 
    //funcion invertir
    printf("\n D)valores de a y b antes de invertir:\n a=%d \n b=%d",a,b);
    invertir(&a,&b);
    printf("\n D)Valores de a y b luego de invertir:\n a=%d \n b=%d",a,b);
    //punto E
    orden(&a,&b);
    a=10;
    b=10;
    orden(&a,&b);
    a=1;
    b=10;
    orden(&a,&b);
    printf("FIN");
    return 0;
}

