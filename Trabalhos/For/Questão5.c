#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{   setlocale(LC_ALL, "");

    int dias;
    float pagar;

    printf("Quantos dias você ficou hospedado? ");
    scanf("%d", &dias);

    for(int i = 0; i <= dias; i++){
        if(dias == 1)
            pagar = 80;
        else if(dias == 2 )
            pagar = 80 * 2;
        else if(dias == 3)
            pagar = 80 * 3;
        else if(dias == 4)
            pagar = 80 * 4;
        else if(dias == 5)
            pagar = 80 * 5;
        else if(dias == 6)
            pagar = (80 * 5) + 60;
        else if(dias == 7)
            pagar = (80 * 5) + (60 * 2);
        else if(dias == 8)
            pagar = (80 * 5) + (60 * 3);
        else if(dias == 9)
            pagar = (80 * 5) + (60 * 4);
        else if(dias == 10)
            pagar = (80 * 5) + (60 * 5);
        else if (dias > 10)
            pagar = (80 * 5) + (60 * 5) + ((dias - 10)* 50);

    }

    printf("Você deverá pagar R$%.2f", pagar);

    return 0;
}