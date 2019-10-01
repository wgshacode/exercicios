#include <stdio.h>
#include <stdlib.h>

int main()
{

    float raio, circulo;
    printf("conversao de raio para comprimento de um circulo !\n");
    printf("joaozinho adicione um raio !\n");

    scanf("%f",&raio);

circulo = raio*(3.141592*3.141592);

    printf("comprimento de um circulo %\.2f \n ",circulo);

    system("pause");

    return 0;
}
