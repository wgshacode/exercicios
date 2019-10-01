#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, resultado;
    printf("insira um numero real!\n");
    scanf("%f", &num1 );

    resultado = num1/5;

    printf("%\.1f", resultado);

    return 0;
}
