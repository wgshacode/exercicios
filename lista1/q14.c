#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, resultado;
    printf("ola usuario adicione um angulo !\n");
    printf("para converter radiano!\n");
    scanf("%f", &num);

    resultado = (num*3.14)/180;

    printf("%\.2f \n" , resultado  );
    system("pause");

    return 0;
}
