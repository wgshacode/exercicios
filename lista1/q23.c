#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  metros , resultado;
    printf("conversao de metros pra jardas!\n");
    printf("adicione o conprimento em jardas!\n ");

    scanf("%f" , &metros);

    resultado = metros/0.91;

    printf("%\.2f jardas\n ", resultado);

    system("pause");

    return 0;
}
