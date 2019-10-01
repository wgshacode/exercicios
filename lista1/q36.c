#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura, raio, volume;
    printf("para calcular o volume de um cilindro!\n");

    printf("incira a altura!\n");
    scanf("%f" , &altura);

    printf("insira o raio!\n");
    scanf("%f" , &raio);

    volume = 3.14*(raio*raio)*altura;

    printf("volume do cilindro %\.2f\n", volume);

    system("pause");

    return 0;
}
