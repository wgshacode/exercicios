#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, resultado;
    printf("ola usuario adicione um radiano !\n");
    printf("para converter angulos em graus!\n");
    scanf("%f", &num);

    resultado = (num*180)/3.14;

    printf("%\.2f \n" , resultado  );
    system("pause");

    return 0;
}
