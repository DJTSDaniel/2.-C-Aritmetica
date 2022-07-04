// Inicio Cabecera
#include <stdio.h> 
//Fin cabecera

// inicio firmas
int suma(int dato1, int dato2);
int restar(int dato1, int dato2);
int multiplicar(int dato1, int dato2);
int dividir(int dato1, int dato2);
// fin firmas

//inicio metodos
int main (){//inicio main
    int dato1,dato2,r;
    dato1 = 5;
    dato2 = 6;

    r = suma(dato1,dato2);
    printf("El resultado de sumar %d + %d es igual a: %d \n",dato1,dato2,r);
    printf("\n");

    r = restar(dato1,dato2);
    printf("El resultado de restar %d - %d es igual a: %d \n",dato1,dato2,r);
    printf("\n");

    r = multiplicar(dato1,dato2);
    printf("El resultado de multiplicar %d * %d es igual a: %d \n",dato1,dato2,r);
    printf("\n");

    r = dividir(dato1,dato2);
    printf("El resultado de dividir %d / %d es igual a: %d \n",dato1,dato2,r);
    printf("\n");

    return 0;

}//fin main 

int suma(int dato1, int dato2){
    int r = 0;
    r = dato1 + dato2;
    return r;
}// fin metodo suma

int restar(int dato1, int dato2){
    int r = 0;
    r = dato1 - dato2;
    return r;
}// fin metodo restar

int multiplicar(int dato1, int dato2){
    int r = 0;
    r = dato1 * dato2;
    return r;
}// fin metodo multiplicar

int dividir(int dato1, int dato2){
    int r = 0;
    r = dato1 / dato2;
    return r;
}// fin metodo dividir