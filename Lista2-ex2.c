/*Fazer um algoritmo que leia três valores e identifique qual o maior valor informado.*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);
    if (a > b && a > c)
        printf("O maior valor é %d", a);
    else if (b > a && b > c)
        printf("O maior valor é %d", b);
    else
        printf("O maior valor é %d", c);
    return 0;
}
