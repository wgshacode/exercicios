#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, resultado;
    printf("ola usuario adicione um comprimento em polegado !\n");
    printf("para converter em centimetros!\n");
    scanf("%f", &num);

    resultado = (num*2.54);

    printf("%\.2f \n" , resultado  );
    system("pause");

    return 0;
}
