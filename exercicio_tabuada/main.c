#include <stdio.h>

int main()
{

    int total = 0;
    int resultado[10];

    for (int j = 1; j <= 10; j++)
    {
        printf("Tabuada do %d\n", j);

        for (int i = 1; i <= 10; i++)
        {
            int calculo = i * j;
            printf(" %d x %d = %d\n", j, i, calculo);
            resultado[i] = calculo;
            total += calculo;
        }
    }

    printf("A soma do resultado de todas equações é: %d\n", total);
}