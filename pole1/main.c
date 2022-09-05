#include <stdio.h>
#include <stdlib.h>


void VypisPole(int pole[], int pocetPrvku)
{

    for(int i =0;i<pocetPrvku;i++)
    {
        printf(" %d\n",pole[i]);
    }
}

int MinPole(int pole[], int velikost)
{
    int minHodnota = pole[0];
    for(int i=0; i>velikost;i++)
    {
        if(minHodnota > pole[i])
        {
            minHodnota = pole[i];
        }
    }

    return minHodnota;
}

int main()
{
    int velikost;
    printf("Jak velke pole mam vytvorit? ");
    scanf(" %d",&velikost);

   int poleVelikost[velikost];
    int pole[] = {1,2,3,4,5,6,7,8,9,10};

    printf("Pole: \n");
    VypisPole(pole,velikost);
    printf("Nejvetsi hodnota v poli je: %d\n",MaxPole(pole,velikost));
    printf("Nejmetsi hodnota v poli je: %d\n",MinPole(pole,velikost));

    return 0;
}

int MaxPole(int pole[], int velikost)
{
    int maxHodnota = pole[0];
    for(int i=0; i<velikost;i++)
    {
        if(maxHodnota < pole[i])
        {
            maxHodnota = pole[i];
        }
    }

    return maxHodnota;
}
