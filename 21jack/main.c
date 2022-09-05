#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soucet=0;
    char odpoved;
    int min=2;
    int max=9;

    printf("Tisk nahodnych cisel\n");

    srand(time(NULL));                                      //generovani nahodneho cisla
    soucet = (rand() % max + min) + (rand() % max + min);         // generovani nahodnehop cisla v rozsahu 2-11

    do{
        printf("soucet tvych karet je: %d\n", soucet);
        printf("Chces dalsi kartu? (a/n)");
        scanf(" %c",&odpoved);

        if(odpoved == 'n')
        {
            break;
        }
        else
        {
            soucet += rand()%max+min;
        }
    }while(odpoved != 'n');

    if(soucet > 21)
    {
        printf("Prohral jsi, zkus to znovu");
    }
    else if(soucet == 21)
    {
        printf("Vyhrál jsi");
    }
    else
    {
        int skore = 21 -soucet;
        printf("Tvoje skore je: %d, cim mene. tim lepe",skore);
    }
}
