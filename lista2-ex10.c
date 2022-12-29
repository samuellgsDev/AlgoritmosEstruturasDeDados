/*Faça um algoritmo que multiplique o conteúdo de cada posição de dois vetores entre si e armazene o resultado em um terceiro vetor (que será do mesmo tamanho dos 2 primeiros).*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);
    int v1[n], v2[n], v3[n];
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor do vetor 1 na posicao %d: ", i);
        scanf("%d", &v1[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor do vetor 2 na posicao %d: ", i);
        scanf("%d", &v2[i]);
    }
    for (i = 0; i < n; i++)
    {
        v3[i] = v1[i] * v2[i];
    }
    printf("Vetor 3: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", v3[i]);
    }
    return 0;
}