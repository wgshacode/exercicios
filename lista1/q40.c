#include <stdio.h>
#include <stdlib.h>


int main()
{
    float dias, valor, percentual_imposto_de_renda, valor_a_ser_pago;
    printf("insira o valor em dias, valor cobrado e o imposto de renda!\n");
    printf("para saber o valor a ser pago valor_liquido!\n");

    printf("insira a quantidades de dias!\n");
    scanf("%f" , &dias);

    printf("valor a ser pago!\n");
    scanf("%f" , &valor);

    printf("percentual imposto de renda!\n");
    scanf("%f" , &percentual_imposto_de_renda);

    valor_a_ser_pago = (dias*valor);
    valor_a_ser_pago = valor_a_ser_pago-percentual_imposto_de_renda*valor_a_ser_pago/100;



    printf("valor liquido a ser pago %\.2f\n", valor_a_ser_pago);

    system("pause");

    return 0;
}
