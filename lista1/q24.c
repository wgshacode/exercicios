#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metros, acres;
    printf("conversao de metros quadrados em acres!\n");
    printf("usuario adicione o valor de metros^2!\n");

    scanf("%f", &metros);

    acres = metros*0.000247;

    printf("%\.2f acres \n", acres);

    system("pause");

    return 0;
}
