/*Faça um algoritmo que faça a união de dois vetores de mesmo nanho
e mesmo tipo em um terceiro vetor com dobro do tamanho.*/
#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);
    int vet1[n], vet2[n], vet3[n * 2];
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor do vetor 1 na posicao %d: ", i);
        scanf("%d", &vet1[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor do vetor 2 na posicao %d: ", i);
        scanf("%d", &vet2[i]);
    }
    for (i = 0, j = 0, k = 0; i < n; i++, j++, k += 2)
    {
        vet3[k] = vet1[i];
        vet3[k + 1] = vet2[j];
    }
    for (i = 0; i < n * 2; i++)
    {
        printf("%d ", vet3[i]);
    }
    return 0;
}