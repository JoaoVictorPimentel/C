#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{   setlocale(LC_ALL, "");

    int ano, dias;

    printf("Digite o ano em que você nasceu: ");
    scanf("%d", &ano);

    for(int i = ano; i < 2021; i++){
        if(i % 4 == 0)
            dias = dias + 366;
        else
            dias = dias + 365;
    }

    printf("Você viveu %d dias\n", dias);

    return 0;
}