#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d, resultado;
    printf("insira as notas do fulano!\n");
    printf("adicione a primeira nota!\n");
    scanf("%f" , &a);

    printf("adicione a segunda nota!\n");
    scanf("%f" , &b);

    printf("adicione a terceira nota!\n");
    scanf("%f" , &c);

    printf("adicione a ultima nota!\n");
    scanf("%f" , &d);

    resultado = (a+b+c+d)/4;
7
    printf("%\.2f media \n", resultado);

    system("pause");



    return 0;
}
