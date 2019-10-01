#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, resultado;
    printf("ola usuario adicione um metros cubicos !\n");
    printf("para converter em litros!\n");
    scanf("%f", &num);

    resultado = 100*num;

    printf("%\.2f \n" , resultado  );
    system("pause");

    return 0;
}
