#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1 ,resultado;
    printf("converter de celsios para kelvin!\n");
    printf("adicione uma temperatura");
    scanf("%f" , &num1);

    resultado = num1 + 273.15;

    printf("&\.2f !\n kelvin " ,resultado);


    return 0;
}
