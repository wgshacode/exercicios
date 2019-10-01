#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, pecentual_de_aumento, percentual_do_imposto, valor_a_ser_pago;
    printf("para calcular o salario, adicione as informacoes!\n");

    printf("valor do valor salario!\n");
    scanf("%f" , &salario);

    printf("pecentual de aumento!\n");
    scanf("%f" , &pecentual_de_aumento);

    printf("porcentagem do imposto!\n");
    scanf("%f" , &percentual_do_imposto);


    valor_a_ser_pago = salario+(salario*pecentual_de_aumento)/100;
    valor_a_ser_pago =  (valor_a_ser_pago-(percentual_do_imposto*salario)/100);

    printf("salario foi de %\.2f\n", valor_a_ser_pago);

    system("pause");

    return 0;
}
