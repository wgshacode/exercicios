#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, porcentagem, aumento;
    printf("insira o valor, e o aumento que voce deseja!\n");
    printf("valor do salario!\n");
    scanf("%f" , &salario );

    printf("porcentagem do aumento!\n");
    scanf("%f" , &porcentagem);

    aumento = salario+(porcentagem*salario/100);

    printf("novo salario foi de %\.2f\n", aumento);

    system("pause");

    return 0;
}
