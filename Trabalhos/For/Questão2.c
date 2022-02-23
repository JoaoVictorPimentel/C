#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{   setlocale(LC_ALL, "");

    int parcelas;
    float valor, parvalor, jurosvalor, x;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite a quantidade de parcelas que deseja dividir: ");
    scanf("%d", &parcelas);

    parvalor = valor / parcelas;

    for(int i = 0; i < parcelas; i++){
        x = parvalor * (i* 2) / 100;
        jurosvalor = parvalor + x;
        printf("Parcela %d: R$%.2f\n", i + 1, jurosvalor);
    }

    return 0;
}