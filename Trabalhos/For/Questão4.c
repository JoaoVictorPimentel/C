#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{   setlocale(LC_ALL, "");

    int n, maior;

    for(int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &n);
        if(n > maior)
            maior = n;
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}