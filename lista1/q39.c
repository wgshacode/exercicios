#include <stdio.h>
#include <stdlib.h>

int main()
{
    float premio, primeiro_lugar, segundo_lugar, terceiro_lugar;
    printf("Calcule e imprima a quantia ganha por cada um dos ganhadores!\n");
    printf("insira o valor o premio!\n");

    scanf("%f" ,&premio);


    primeiro_lugar = premio*46/100;
    printf("o resltado para o primeiro  lugar foi de %\.2f\n",  primeiro_lugar);

    segundo_lugar = premio*32/100;

    printf("o resltado para o segundo lugar foi de %\.2f\n", segundo_lugar);

    terceiro_lugar = premio*22/100;

    printf("o resltado para o  terceiro lugar foi de %\.2f\n", terceiro_lugar);

    system("pause");

    return 0;
}
