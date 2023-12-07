#include <stdio.h>

int main()
{

    int vetor[10];
    int numPares = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número para a posição: \n");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            numPares++;
        }
    }
    printf("%d", numPares);
}