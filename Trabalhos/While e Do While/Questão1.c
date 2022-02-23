#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{   setlocale(LC_ALL, "");

    int vezes = 0;
    float elemento = 0;

    printf("Informe o peso do elemento em KG: ");
    scanf("%f", &elemento);

    while(elemento >= 1){
        elemento /= 2;
        vezes += 1;
        printf("Peso atual: %.2f\n", elemento);
    }

    printf("%d VEZES", vezes);

    return 0;
}