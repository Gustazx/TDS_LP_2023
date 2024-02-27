#include <stdio.h>

struct Produto {
    char nome[50];
    float preço;
    int estoque;
};

int main() {

    struct Produto produto1;

    printf("Digite o nome do produto: ");
    scanf(" %s", produto1.nome);
    printf("Digite o preço do produto: ");
    scanf("%f", &produto1.preço);
    printf("Digite o estoque do produto: ");
    scanf("%d", &produto1.estoque);

    printf("Dados do produto\n");
    printf("Nome do produto: %s\nPreço do produto: %.2f\nEstoque do produto: %d\n", produto1.nome, produto1.preço, produto1.estoque);

}

