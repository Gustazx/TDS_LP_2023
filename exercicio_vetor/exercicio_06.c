int main()
{

    int vetor[6] = {9, 7, 2, 3, 5, 1};
    int lista[6];
    int maiorValor = 0;

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("Digite um número para a posição: \n");
    //     scanf("%d", &vetor[i]);
    // }

    for (int i = 0; i < 6; i++)
    {
        if (vetor[i] >= maiorValor)
        { //  9
            maiorValor = vetor[i];
            vetor[i] = maiorValor;

            if (maiorValor < lista[i])
            {
                lista[i] = maiorValor;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("\n%d", lista[i]);
    }
}