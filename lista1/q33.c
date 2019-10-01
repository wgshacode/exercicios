#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, area;
    printf("Digite o lado do quadrado:\n");
    scanf("%f", &lado);

    area = lado*lado;

    printf(" sua area e de %\.2f " ,area);

     system("pause");

    return 0;
}
