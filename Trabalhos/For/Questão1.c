#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{   setlocale(LC_ALL, "");

    int x;
    printf("Digite um número: ");
    scanf("%d", &x);

    for(int i = 0; i <= x; i++){
        if (i % 2 != 0)
        printf("%d\n", i);
    }
    return 0;
}