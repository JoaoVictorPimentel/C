#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{   setlocale(LC_ALL, "");

    int idade = 0, somador = 0, somador1 = 0, media;

    printf("Informe a idade dos pacientes: \n");

    do{
        scanf("%d", &idade);
        somador += idade; //Soma as idades.
        if(idade > 0)
        somador1 += 1; //Soma a quantidade de vezes digitada.
    } while(idade > 0);

    media = somador / somador1;

    printf("MÉDIA: %d", media);

    return 0;
}