#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// 18. Faca um programa que mostre ao usuario um menu com 4 opcoes de operacoes matematicas
// O usuario escolhe uma das opcoes e o seu programa entao pede dois valores numericos e
// realiza a operacao, mostrando o resultado e saindo.

int main()
{

    setlocale(LC_ALL, "pt_BR.utf8");

    // Declarando variáveis que serão utilizadas ao decorrer do código
    int inputOperacao;
    float resultadoOperacao, inputPrimeiroNumero, inputSegundoNumero; // Usando float para permitir casas decimais na divisão

    // Apresentando opções para o usuário e solicitando operação
    printf("Escolha a operação matemática:\n1-Soma\n2-Subtração\n3-Divisão\n4-Multiplicação\n");
    scanf("%d", &inputOperacao);

    // Solicitando números inteiros para realizar a operação
    printf("Digite o primeiro número:\n");
    scanf("%f", &inputPrimeiroNumero);
    printf("Digite o segundo número:\n");
    scanf("%f", &inputSegundoNumero);

    // Switch case responsável pela seleção de operação
    switch (inputOperacao)
    {
    case 1:
        resultadoOperacao = inputPrimeiroNumero + inputSegundoNumero;
        break;

    case 2:
        resultadoOperacao = inputPrimeiroNumero - inputSegundoNumero;
        break;

    case 3:
        // Usando float para permitir casas decimais na divisão
        if (inputSegundoNumero != 0)
        {
            resultadoOperacao = (float)inputPrimeiroNumero / inputSegundoNumero;
        }
        else
        {
            printf("Erro: divisão por zero\n");
            return 1; // Retorna um código de erro
        }
        break;

    case 4:
        resultadoOperacao = inputPrimeiroNumero * inputSegundoNumero;
        break;

    default:
        printf("Opção inválida\n");
        return 1; // Retorna um código de erro
    }

    printf("O resultado é: %.2f\n", resultadoOperacao); // Exibe o resultado com duas casas decimais
    return 0;                                           // Retorna 0 indicando sucesso
}