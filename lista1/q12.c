#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, resultado;
    printf("ola usuario adicione uma velocidade !\n");
    printf("para converter milhas em km/h!\n");
    scanf("%f", &num);

    resultado = num*3.6;

    printf("%\.2f \n" , resultado  );
    system("pause");

    return 0;
}
