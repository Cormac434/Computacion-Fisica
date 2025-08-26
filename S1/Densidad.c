#include <stdio.h>

int main(){
    float masa, volumen, densidad;

    printf("Ingresa el valor de la masa: ");
    scanf("%f",&masa);
    printf("Ingresa el valor del volumen");
    scanf("%f", &volumen);

    densidad= masa/volumen;

    if(densidad<=1){
        printf("se hunde\n");
        }
    else{
    printf("flota\n");
    }
}
