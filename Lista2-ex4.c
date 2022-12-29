/*Escreva quantos anos serão necessários para que Ciclano seja maior que Fulano.
 Considere que Fulano tem 1,50 m e cresce 2 cm por ano e Ciclano tem 1,10 m e cresce 3 cm por ano. utilize o for*/
#include <stdio.h>
int main()
{
    float fulano = 1.5, ciclano = 1.1;
    int anos = 0;
    for (; fulano > ciclano; anos++)
    {
        fulano += 0.02;
        ciclano += 0.03;
    }
    printf("Serão necessários %d anos para que Ciclano seja maior que Fulano", anos);
    return 0;
}
