#include <stdio.h>
#include <stdlib.h>

int main()
{
    float acres, metros;
    printf("coversao de acres para metros!\n");
    printf("o fulano adicione uma medida em acres!\n");

    scanf("%f", &acres);

    metros = acres*4048.58;

    printf("%\.2f acres \n", metros);
    system("pause");

    return 0;
}
