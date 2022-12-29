/*Fazer um algoritmo que leia o nome e a altura de três pessoas, determinando o nome e a altura da menor delas que será apresentado ao usuário deste algoritmo.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char nome1[20], nome2[20], nome3[20];
    float h1, h2, h3;
    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", nome1);
    printf("Digite a altura da primeira pessoa: ");
    scanf("%f", &h1);
    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", nome2);
    printf("Digite a altura da segunda pessoa: ");
    scanf("%f", &h2);
    printf("Digite o nome da terceira pessoa: ");
    scanf("%s", nome3);
    printf("Digite a altura da terceira pessoa: ");
    scanf("%f", &h3);
    if (h1 < h2 && h1 < h3)
        printf("A pessoa mais baixa é %s com %.2f metros de altura", nome1, h1);
    else if (h2 < h1 && h2 < h3)
        printf("A pessoa mais baixa é %s com %.2f metros de altura", nome2, h2);
    else
        printf("A pessoa mais baixa é %s com %.2f metros de altura", nome3, h3);
    return 0;
}