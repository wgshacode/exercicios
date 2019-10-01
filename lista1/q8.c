#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, resultado;
    printf("converter Kelvin para celsios!\n");
    printf("adicione uma temperatura!\n");
    scanf("%f", &num1);

    resultado = num1 - 273.15;

    printf("%\.2f celsios!\n ", resultado );
    system("pause");

    return 0;
}
