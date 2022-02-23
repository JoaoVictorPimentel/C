#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{   setlocale(LC_ALL, "");

    int nota;

    do{
        printf("Digite uma nota válida: ");
        scanf("%d", &nota);
    }while(nota < 0 || nota > 10);

    printf("Nota registrada");

    return 0;
}