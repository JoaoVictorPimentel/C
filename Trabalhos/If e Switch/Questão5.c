#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{   setlocale(LC_ALL, "");

    int carrinho;
    float sandu, suco, refri, total = 0;

    //Cardápio
    printf("=====================\n");
    printf("CARDÁPIO: \n");
    printf("1 – Sanduiche R$ 6,00 \n");
    printf("2 – Suco R$ 3,00 \n");
    printf("3 – Refrigerante R$ 2,50 \n");
    printf("======================\n");

    //Valores
    sandu = 6.00;
    suco = 3.00;
    refri = 2.50;

    //Carrinho
    printf("=======CARRINHO=======\n");
    printf("Digite o número do produto que deseja adicionar no carrinho e 0 para finalizar!\n");

    do{
        printf("Produto: ");
        scanf("%d", &carrinho);
        if(carrinho == 1)
            total += sandu;
        else if(carrinho == 2)
            total += suco;
        else if(carrinho == 3)
            total += refri;
    } while(carrinho > 0);

    printf("Total a pagar: R$%.2f \n", total);
    printf("======================\n");

    return 0;
}