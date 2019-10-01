#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num , resultado;
    printf("converter km/h em m/s!\n");
    printf("adicione uma vocidade!\n");
    scanf("%f", &num);

    resultado = num/3.6;

    printf("%\.2f metros por segundo!\n ", resultado );
    system("pause");

    return 0;
}
