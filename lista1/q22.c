#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  jardas , resultado;
    printf("conversao de jardas pra metros!\n");
    printf("adicione o conprimento em jardas!\n ");

    scanf("%f" , &jardas);

    resultado = 0.91*jardas;

    printf("%\.2f metros\n ", resultado);

    system("pause");

    return 0;
}
