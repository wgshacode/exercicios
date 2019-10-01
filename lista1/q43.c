#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_total_lido, valor_com_desconto, valor_de_cada_parcela;
    float comicao_do_vendedo, a_comissao_do_vendedor_se_pago_avista;
    printf("programa de ajuda para vendedores!\n");

    printf("valor do produto!\n");
    scanf("%f" , &valor_total_lido);

    valor_com_desconto = valor_total_lido-(valor_total_lido*10)/100;
    printf("o total a pagar com desconto de 10 porcento %\.2f\n", valor_com_desconto);

    valor_de_cada_parcela = (valor_total_lido/3);
    printf("o valor de cada parcela, no parcelamento de 3 vezes sem juros %\.2f\n" , valor_de_cada_parcela);

    comicao_do_vendedo = (valor_com_desconto*5)/100;
    printf("a comissao do vendedor, no caso da venda ser a vista 5 porcento sobre o valor com desconto %\.2f\n" , comicao_do_vendedo);

    a_comissao_do_vendedor_se_pago_avista = (valor_total_lido*5)/100;
    printf("a comissao do vendedor, no caso da venda ser parcelada 5 porcento sobre o valor total %\.2f\n" , a_comissao_do_vendedor_se_pago_avista);

    system("pause");

    return 0;
}
