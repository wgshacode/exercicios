#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, soma;
    /*
    int suc_triplo;
    int ant_dobro;
    int triplo;
    int dobro;
    */
    scanf("%d", &num);

    soma = (3*num)+1 + (2*num)-1;
    /*
    triplo = 3*num;
    suc_triplo = triplo+1;
    dobro = num*2;
    ant_dobro = dobro-1;
    soma = suc_triplo + ant_dobro;
    */
    printf("A soma do sucessor do triplo com antecessor do dobro eh %d ",soma);

    return 0;
}
