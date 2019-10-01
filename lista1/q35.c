#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, hipotenusa;
    printf("adicione o cateto a!\n");
    scanf("%f" , &a);

    printf("adicione o cateto b!\n");
    scanf("%f", &b);

    hipotenusa = sqrt(pow(a,2)+pow(b,2));

    printf("hipotenusa e igual %\.f\n", hipotenusa);

    system("pause");


    return 0;
}
