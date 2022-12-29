/*Leia um número inteiro e positivo e escreva o seu fatorial. Considere: N! = 1 x 2 x 3 x ... x N-1 x N e 0 ! = 1*/
#include <stdio.h>
int main()
{
    int num, i, fat = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fat *= i;
    }
    printf("%d! = %d", num, fat);
    return 0;
}