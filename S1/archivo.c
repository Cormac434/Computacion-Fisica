#include <stdio.h>

int main(){
    float Va, Vb, d, x; //Estableciendo los valores que se van a pedir Velocidad del movil A, del movil B, y la distancia d, asimismo con la distancia final x



    printf("Ingresa la velocidad del vehiculo 1 (km/h):"); //Pidiendo la velocidad del primer movil
    scanf("%f", &Va); //Asignando el valor a la variable Va
    printf("Ingresa la velocidad del vehiculo 2 (km/h):"); //Pidiendo la velocidad del segundo movil
    scanf("%f", &Vb); //Asignando el valor a la variable Vb
    printf("Ingresa la distancia entre los vehiculos (km):"); //Pidiendo la distancia entre ambos moviles
    scanf("%f", &d); //asignando el valor a la variable d

    x=((d*Va)/(Va-Vb))*1000; //aplicando la formula para determinar la distancia, distancia por velocidad A entre la resta de las velocidades, y multiplicando el resultado por 1000 para que el resultado sea en metros

    printf("La distancia en la que chocarán es: %f metros", x); //dando el resultado en metros




}