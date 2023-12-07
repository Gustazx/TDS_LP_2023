#include <stdio.h>

int main()
{

    int vetor[5];
    int menorValor;
    int maiorValor;
    int posMaior = 0;
    int posMenor = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um número para a posição: \n");
        scanf("%d", &vetor[i]);
    }

    menorValor = vetor[0];
    for (int i = 0; i < 5; i++)
    {

        if (vetor[i] <= menorValor)
        {
            menorValor = vetor[i];
            posMenor = i;
        }
        if (vetor[i] >= maiorValor)
        {
            maiorValor = vetor[i];
            posMaior = i;
        }
    }
    printf("Menor valor: %d\n", posMenor + 1);
    printf("Maior valor: %d\n", posMaior + 1);
}