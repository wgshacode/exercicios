#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, resultado;
    printf("adicione tres numeros!\n");
    printf("adicione um numero!\n");
    scanf("%f", &a);

    printf("adicione mais um numeros!\n");
    scanf("%f", &b);

    printf("adicione so mais um numeros!\n");
    scanf("%f", &c);

    resultado = (a*a)+(b*b)+(c*c);

    printf("%\.2f   \n",  resultado);

    system("pause");


    return 0;
}
