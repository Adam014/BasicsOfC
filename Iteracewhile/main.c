#include <stdio.h>
#include <stdlib.h>

int main()
{
    //cyklus while - použít když nevím pøesný poèet opakování

    int cislo;

    do{
        printf("Zadej cislo: ");
        scanf(" %d",&cislo);

    if(cislo%2==0)
    {
        printf("cislo je sude\n");
    }
    else
    {
        printf("cislo je liche\n");
    }

    }while(cislo != 0);
    return 0;
}











