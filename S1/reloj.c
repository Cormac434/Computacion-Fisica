#include <stdio.h>

int main(){
    float h, m, Ah, Am; //Determinando las variables, la hora, el minuto, y los angulos de las manecillas

    printf("Ingresa solo la hora: "); //Pidiendo el valor exclusivamente de la hora
    scanf("%f", &h); //asignando ese valor a la variable h
    printf("Ingresa los minutos: "); //Pidiendo el valor exclusivamente de los minutos
    scanf("%f", &m); //Asignando ese valor a la variable m

    if (h==12)  h=0; //Esto es para asegurarse que 12 es considerada la vertical, y por ende 0 grados

    Am= m*6; //El valor ingresado para los minutos es multiplicado por los 6 grados que se mueve el minutero
    Ah= (h*30)+(m*.5); //El valor ingresado de la hora es multiplicado por los 30 grados que se mueve el horario, ademas se le añade la distancia que se mueve por minuto (.5 grados) el cual es determinado al multiplicar el valor de los minutos por .5

    printf("El angulo del horario es: %f° \nEl angulo del minutero es: %f°", Ah, Am ); //se presenta el angulo de ambas manecillas
    



}