#include <stdio.h>
#include <stdlib.h>

int main()
{

    float metros ,hectares;
    printf("conversao de metros quadrados para hectares !\n");
    printf("joaozinho adicione uma medida em metros!\n");

    scanf("%f",&metros);

    hectares = metros*0.0001;

    printf("%\.2f metros \n ", hectares);

    system("pause");

    return 0;
}
