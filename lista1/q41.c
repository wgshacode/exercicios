#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_cobrado_por_hora, numero_de_horas_trabalhado, percentual_do_aumento, valor_a_ser_pago;
    printf("para calcular o salario, adicione as informacoes!\n");

    printf("valor do valor cobrado por hora!\n");
    scanf("%f" , &valor_cobrado_por_hora);

    printf("numero de horas trabalhada no mes!\n");
    scanf("%f" , &numero_de_horas_trabalhado);

    printf("porcentagem do aumento!\n");
    scanf("%f" , &percentual_do_aumento);


    valor_a_ser_pago = valor_cobrado_por_hora*numero_de_horas_trabalhado;
    valor_a_ser_pago =  (valor_a_ser_pago +(percentual_do_aumento*valor_cobrado_por_hora*numero_de_horas_trabalhado)/100);

    printf("salario foi de %\.2f\n", valor_a_ser_pago);

    system("pause");

    return 0;
}
