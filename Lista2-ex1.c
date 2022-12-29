/*Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores:
61 - Brasília
71 - Salvador
11 até 20 - São Paulo
27 - Vitória
31 - Belo Horizonte
98 e 99 : Maranhão
qualquer outro: DDD desconhecido.*/
#include <stdio.h>
int main()
{
    int ddd;
    printf("Digite o DDD: ");
    scanf("%d", &ddd);
    if (ddd == 61)
        printf("Brasilia ");
    else if (ddd == 71)
        printf("Salvador ");
    else if (ddd >= 11 && ddd <= 20)
        printf("Sao Paulo ");
    else if (ddd == 27)
        printf("Vitoria ");
    else if (ddd == 31)
        printf("Belo Horizonte ");
    else if (ddd == 98 || ddd == 99)
        printf("Maranhao ");
    else
        printf("DDD desconhecido ");
    return 0;
}