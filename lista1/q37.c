#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais, porcentagem, desconto;
    printf("insira o valor e o desconto que voce deseja!\n");
    printf("valor em reais!\n");
    scanf("%f" , &reais );

    printf("porcentagem de desconto!\n");
    scanf("%f" , &porcentagem);

    desconto = reais-(porcentagem*reais/100);

    printf("desconto foi de %\.2f\n", desconto);

    system("pause");

    return 0;
}
