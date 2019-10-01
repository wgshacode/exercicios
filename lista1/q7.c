#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, resultado;
    printf("converter Fahrenheit para celsios!\n");
    printf("adicione uma temperatura!\n");
    scanf("%f", &num1);

    resultado = 5.0*(num1-32.0)/9.0;

    printf("%\.2f celcios!\n", resultado );
    system("pause");

    return 0;
}
