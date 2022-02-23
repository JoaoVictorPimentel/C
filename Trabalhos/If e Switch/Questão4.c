#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{   setlocale(LC_ALL, "");

    int x, par = 0, impar = 0;

    for(int i = 0; i <= 9; i++){
        printf("Digite %d número: ", i + 1);
        scanf("%d", &x);
        if (x % 2 != 0)
            impar += 1;
        else
            par += 1;
    }
    printf("================\n");
    printf("Números ímpares: %d\n", impar);
    printf("Números pares: %d\n", par);

    return 0;
}