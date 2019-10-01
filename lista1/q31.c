#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num , ant, suc;
    printf("Leia um numero inteiro!\n");
    printf("imprima o seu antecessor e o seu sucessor!\n");

    scanf("%d",&num);

    ant = num-1;
    suc = num+1;

    printf("seu antececor e o %d  \n ", ant);
    printf("seu sucessor e o %d  \n ", suc);

    system("pause");

    return 0;
}
