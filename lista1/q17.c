#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, resultado;
    printf("ola usuario adicione um comprimento em centimetros !\n");
    printf("para converter em polegados!\n");
    scanf("%f", &num);

    resultado = (num/2.54);

    printf("%\.2f \n" , resultado  );
    system("pause");

    return 0;
}
