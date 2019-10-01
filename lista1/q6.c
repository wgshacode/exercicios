#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, resultado;
    printf("convercao de celcios para Fahrenheit!\n");
    printf("adicione a tempretura em celcios!\n");
    scanf("%f", &num1);

    resultado = (num1*(9.0/5.0))+32.0;

    printf("%\.2f Fahrenheit!\n",resultado);


    return 0;

}
