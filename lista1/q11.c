#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, resultado;
    printf("converter m/s em km/h!\n");
    printf("adicione uma velocidede!\n");
    scanf("%f", &num );

    resultado = num * 3.6;

    printf("%\.2f kilometros por hora ", resultado );
    system("pause");

    return 0;
}
