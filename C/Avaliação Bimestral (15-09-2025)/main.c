#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Para o segundo exerc�cio
#include <locale.h>
#include <ctype.h> // Para o quarto exercicio

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /* 01. Crie um programa que some dois n�meros inteiros
    e exiba, na tela, o resultado da soma dos n�meros.  */

    int num1, num2;

    printf("Primeiro exerc�cio!");

    printf("\nDigite um n�mero para a opera��o de soma: ");
    scanf("%i", &num1);

    printf("Digite um segundo n�mero: ");
    scanf("%i", &num2);

    int soma;
    soma = num1 + num2;

    printf("O resultado da adi��o � %i", soma);

    /* 02. Crie um programa que leia dois n�meros (digitados, um de cada vez)
    e exiba o resultado do primeiro n�mero elevado ao segundo. */

    int a, b;

    printf("\n");
    printf("\nSegundo exerc�cio!");

    printf("\nDigite um n�mero base: ");
    scanf("%i", &a);

    printf("Elevado a quanto?: ");
    scanf("%i", &b);

    printf("Sua pot�ncia resultou %0.1f", pow(a, b));

    /* 03. Crie um programa que leia dois n�meros (digitados, um de cada vez) e que exiba o maior. Caso os n�meros sekam iguais,
    imprimir na tela: "Os n�meros s�o iguais" */

    int i, f;

    printf("\n");
    printf("\nTerceiro exerc�cio!");

    printf("\nVamos comparar n�meros? Digite um n�mero para ser comparado: ");
    scanf("%i", &i);

    printf("Digite o n�mero para comparar: ");
    scanf("%i", &f);

    if (i > f) {
        printf("N�mero um � maior!");
    }
    else if (f > i) {
        printf("N�mero dois � maior!");
    }
    else {
        printf("Os n�meros s�o iguais!");
    }

    /* 04. Crie um programa que leia dois caracteres (letra) na tela (um de cada vez) e, ap�s a leitura do segundo caractere,
    pergunte ao usu�rio se ele gostaria de sobrescrever o valor do segundo caractere digitado. Caso sim, ele repetir� o trecho
    de c�digo que pede o valor do segundo caractere, at� que o usu�rio n�o queira mais sobrescrever. Ap�s isso, exibir o valor de cada
    caractere na tela. */

    char char1;
    char char2;
    char renovarValor = 'S';

    while((getchar() != '\n') && !(EOF));

    printf("\n");
    printf("\nQuarto exerc�cio!");

    printf("\nDigite o valor do primeiro caractere: ");
    scanf("%c", &char1);
    while((getchar() != '\n') && !(EOF));

    while (toupper (renovarValor) == 'S') {
        printf("Digite o valor do segundo caractere: ");
        scanf("%c", &char2);
        while((getchar() != '\n') && !(EOF));

        printf("Gostaria de renovar o valor? (S - Sim / N - N�o): ");
        scanf("%c", &renovarValor);
        while((getchar() != '\n') && !(EOF));
    }

    printf("\n");
    printf("Valores: \n");
    printf("Caractere 1: %c\n", char1);
    printf("Caractere 2: %c\n", char2);
    printf("Fim da Avalia��o.\n");


    return 0;
}
