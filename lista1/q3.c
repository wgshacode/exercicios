#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, num3, resultado;
    printf("adicione um numero: ");
    scanf("%d", &num1);

    printf("Digite um numero: ");
    scanf("%d", &num2);

    printf("adicione um numero");
    scanf("%d", &num3 );

    resultado = num1 + num2 + num3;

    printf("%d + %d + %d = %d", num1,num2, num3, resultado);
}

