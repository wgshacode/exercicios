#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, resultado;
    printf("ola usuario adicione uma massa em libras !\n");
    printf("para converter em massa em quilogramas!\n");
    scanf("%f", &num);

    resultado = num*0.45;

    printf("%\.2f \n" , resultado  );
    system("pause");

    return 0;
}
