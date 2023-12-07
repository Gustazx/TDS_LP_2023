#include <stdio.h>

int main()
{

    int vetor[8];
    int x, y, soma;
    printf("Insira um numero:");
    scanf("%d", &vetor[7]);

    printf("Insira outro numero:");
    scanf("%d", &vetor[8]);

    x = vetor[7];
    y = vetor[8];
    soma = x + y;

    printf("%d", soma);
}