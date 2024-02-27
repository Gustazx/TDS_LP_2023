#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {

    struct Aluno aluno1;

    printf("Digite seu nome: ");
    scanf(" %s", aluno1.nome);
    printf("Digite sua idade: ");
    scanf("%d", &aluno1.idade);
    printf("Digite sua nota: ");
    scanf("%f", &aluno1.nota);

    printf("Dados do aluno\n");
    printf("Nome do aluno: %s\nIdade do aluno: %d\nNota do aluno: %.2f\n", aluno1.nome, aluno1.idade, aluno1.nota);

}

