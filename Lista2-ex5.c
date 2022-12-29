/*Leia um número inteiro e escreva se ele é primo.*/
#include <stdio.h>
int main()
{
    int num, i, primo = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            primo = 0;
            break;
        }
    }
    if (primo)
        printf("%d e primo", num);
    else
        printf("%d nao e. primo", num);
    return 0;
}
