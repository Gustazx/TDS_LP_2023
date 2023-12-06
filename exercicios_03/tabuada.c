#include <stdio.h>

int main(void)
{
    printf("-----tabuada-----");

    int resultado[11];

    int totalDaSoma = 0;
    for (int i = 1; i <= 10; i++)
    {
        resultado[i] = 0;

        for (int j = 1; j <= 10; j++)
        {

            resultado[i] = resultado[i] + (i * j);

            totalDaSoma = totalDaSoma + (i * j);
            printf("\n %d X %d = %d\n", i, j, (i * j));
        }

        printf("\n resultado total da tabuada %d: (%d) ", i, resultado[i]);
        printf("\n------------");
    }

    printf("\n o total da soma das tabuadas: %d", totalDaSoma);
}