/*Faça um algoritmo que coloque o valor de cada posição de um vetor (vetor1) em um novo vetor (vetor2),
 com o dobro do valor original de cada posição do vetor original.*/
#include <stdlib.h>
int main()
{
    int i, n=10;
    int v1[n], v2[n];
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor do vetor 1 na posicao %d: ", i);
        scanf("%d", &v1[i]);
    }
    for (i = 0; i < n; i++)
    {
        v2[i] = v1[i] * 2;
    }
    printf("Vetor 2: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", v2[i]);
    }
    return 0;
}