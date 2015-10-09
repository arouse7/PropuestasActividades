#include <stdio.h>

int main(){
    char nombre[20];

    printf("Hola como te llamas: ");
    scanf("%s",nombre);
    getc(stdin);
    printf("Mucho gusto %s\n",nombre);    

    return 0;
}
