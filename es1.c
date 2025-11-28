/*Il programma legge due numeri e controlla se il primo è maggiore del secondo.*/

#include <stdio.h>

int main(){
    int numero_verysmol, numero_verybigu;
    printf("inserici un numero");
    scanf("%d", &numero_verysmol);
    printf("adesso uno piu grosso");
    scanf("%d", &numero_verybigu);

    if(numero_verysmol <= numero_verybigu){
    printf("ok bravo");
    return 0;
} else {
    printf("BUGIARDO");
}
}