/*Leia o salário de 15 funcionários e escreva: a) quantos funcionários recebem mais de R$2.000,00; 
b) quanto a empresa gasta com estes funcionários e
c) quanto a empresa gastaria se fosse dar um aumento de 7,5% aos funcionários que recebem menos que R$2.000,00.*/
#include <stdio.h>
int main()
{
    int i, cont = 0;
    float salario, soma = 0, soma2 = 0;
    for (i = 1; i <= 15; i++)
    {
        printf("Digite o salario do funcionario %d: ", i);
        scanf("%f", &salario);
        if (salario > 2000)
        {
            cont++;
            soma += salario;
        }
        else
        {
            soma2 += salario * 1.075;
        }
    }
    printf("A empresa gasta com os funcionarios que recebem mais de R$2000,00: R$%.2f e com os que recebem menos de R$2000,00: R$%.2f", soma, soma2);
    return 0;