#include <stdio.h>

int main()
{

    int vetor[10];
    int menorValor;
    int maiorValor;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número para a posição: \n");
        scanf("%d", &vetor[i]);
    }

    menorValor = vetor[0];
    for (int i = 0; i < 10; i++)
    {

        if (vetor[i] <= menorValor)
        {
            menorValor = vetor[i];
        }
        if (vetor[i] >= maiorValor)
        {
            maiorValor = vetor[i];
        }
    }
    printf("Menor valor: %d\n", menorValor);
    printf("Maior valor: %d\n", maiorValor);
}