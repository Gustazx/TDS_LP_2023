#include <stdio.h>

struct Endereco {
        char rua[50];
        char numero[50];
    };

struct Pessoa {
    char nome[50];
    char idade[50];
    struct Endereco endereco;
   
};

int main() {

    FILE * pont_arq;
    struct Pessoa pessoa1;

    pont_arq = fopen("arquivo.txt", "w");

    printf("Digite seu nome: ");
    fgets(pessoa1.nome, 50 , stdin);
    printf("Digite sua idade: ");
    fgets(pessoa1.idade, 50 , stdin);
    printf("Digite sua rua: ");
    fgets(pessoa1.endereco.rua, 50, stdin);
    printf("Digite o número da sua residencia: ");
    fgets(pessoa1.endereco.numero, 50 , stdin);

    fputs("Dados do Cliente\n", pont_arq);
    fputs("Nome do Cliente: ", pont_arq);
    fputs(pessoa1.nome, pont_arq);
    fputs("Idade do Cliente: ",pont_arq);
    fputs(pessoa1.idade, pont_arq);
    fputs("Endereço do Cliente: ", pont_arq);
    fputs(pessoa1.endereco.rua, pont_arq);
    fputs("Número do Cliente: ", pont_arq);
    fputs(pessoa1.endereco.numero, pont_arq);


    fclose(pont_arq);
    //rintf("Dados da pessoa\n");
    //printf("Nome da pessoa: %s\nIdade da Pessoa: %d\n", pessoa1.nome, pessoa1.idade);
    //printf("Rua da pessoa: %s\nNumero da residencia: %d\n",  pessoa1.endereco.rua, pessoa1.endereco.numero);

}

