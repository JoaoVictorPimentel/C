#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{   setlocale(LC_ALL, "");

    float media;
    int pessoas, s, tpessoas;

    pessoas = 1;

    for(int i = 0; i <= 9; i++){
        if(s >= 3000)
            tpessoas = pessoas++;
        printf("Digite o %d salário: ", i + 1);
        scanf("%d", &s);
        media += s / 10;
    }

    printf("MÉDIA: R$%.2f\n", media);
    printf("Pessoas com salário acima de 3mil: %d", tpessoas);

    return 0;
}