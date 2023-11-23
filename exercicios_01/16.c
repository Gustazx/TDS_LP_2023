#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// 16. Escreva um programa que leia um inteiro entre 1 e 12 e imprima o mes correspondente
// a este numero. Isto e, janeiro se  ́ 1, fevereiro se 2, e assim por diante.
int main()
{

    setlocale(LC_ALL, "pt_BR.utf8");

    int inputMes;
    printf("Insira um numero de 1 a 12:\n");
    scanf("%d", &inputMes);

    if (inputMes <= 0 || inputMes > 12)
    {
        printf("Voce digitou um numero invalido!");
    }
    else
    {
        switch (inputMes)
        {
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Março");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;

        default:
            break;
        }
    }
}
