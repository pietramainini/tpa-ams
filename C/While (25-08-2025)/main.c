#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1;
    int num2;
    char renovarValor = 'S';

    printf("Digite o valor do primeiro n�mero: ");
    scanf("%i", &num1);
    while((getchar() != '\n' && !(EOF)));

    while (toupper (renovarValor) == 'S') {
        printf("Digite o valor do segundo n�mero: ");
        scanf("%i", &num2);
        while((getchar() != '\n') && !(EOF));

        printf("Gostaria de renovar o valor? (S - Sim / N - N�o)");
        scanf("%c", &renovarValor);
        while((getchar() != '\n') && !(EOF));
    }

    printf("\nFim do programa.");
    printf("\nN�mero 1: \n%i", num1);
    printf("\nN�mero 2: \n%i", num2);

    return 0;
}
