#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int numA;
    int numB;

    printf("Digite um n�mero para realizar uma adi��o: ");
    scanf("%i", &numA);

    printf("Digite um outro n�mero para a soma: ");
    scanf("%i", &numB);

    int sum1 = numA + numB;

    if (sum1 > 10){
        printf("Sua soma � maior que 10!");
    }
    else if (sum1 < 10) {
        printf("Sua soma � menor que 10!");
    }
    else {
        printf("Sua soma � igual a 10!");
    }


    return 0;
}
