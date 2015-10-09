#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main(){
    
    double radio;
    double area;    
    
    printf("Ingrese el radio del criculo: ");
    scanf("%lf",&radio);
    
    area = PI * pow(radio,2);

    printf("El area del circulo es: %g\n",area);    

    return 0;
}
