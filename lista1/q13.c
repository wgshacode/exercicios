#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, resultado;
    printf("ola usuario adicione uma velocidade !\n");
    printf("para converter km/h em milhas!\n");
    scanf("%f", &num);

    resultado = num/1.6;

    printf("%\.2f \n" , resultado  );
    system("pause");

    return 0;
}
