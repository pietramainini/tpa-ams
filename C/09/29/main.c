#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    02.
    Crie uma fun��o que receba 3 (tr�s) n�meros como
    par�metro e retorne o maior entre os tr�s
*/

int maiorEntre(int a, int b, int c) {
    int maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    return maior;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, maior;

    printf("Digite 3 (tr�s) n�meros: ");
    scanf("%i %i %i", &num1, &num2, &num3);

    maior = maiorEntre(num1, num2, num3);

      // Verifica se todos s�o iguais
    if (num1 == num2 && num2 == num3) {
        printf("Os tr�s n�meros s�o iguais: %i\n", num1);
    } else {
        maior = maiorEntre(num1, num2, num3);
        printf("O maior n�mero entre %i, %i e %i �: %i\n", num1, num2, num3, maior);
    }

    return 0;
}
