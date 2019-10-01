#include <stdio.h>
#include <stdlib.h>

int main()
{

    float hectares, metros  ;
    printf("conversao de hectare para metros quadrados !\n");
    printf("joaozinho adicione uma medida em hectares!\n");

    scanf("%f",&hectares);

    metros = hectares*10000;

    printf("%\.2f metros\n ", metros);

    system("pause");

    return 0;
}
