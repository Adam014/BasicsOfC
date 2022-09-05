#include <stdio.h>
#include <stdlib.h>

void VypisPole(int pole[], int pocetPrvku)
{
    for (int i=0;i<pocetPrvku;i++)
    {
        printf(" %d\n", pole[i]);

    }
}
void ZmenaPrvkuPole(int pole[], int poziceZmeny)
{
    pole[poziceZmeny] = 111;
}

//fce ktera vrati nejvetsi cislo v poli

int NejvetsiCislo(int pole[], int velikost)
    {
        int maxHodnota = pole[0];
        for (int i=0;i<velikost;i++)
        {
            if (maxHodnota < pole[i])
            {
                maxHodnota = pole[i];
            }
        }
        return maxHodnota;
    }



int main()
{
    int velikostPole =5;
    int pole[] = {1,2,3,4,5};

    printf("Vypis original pole: \n");
    VypisPole(pole,velikostPole);

    printf("Dochazi ke zmene prvku\n ");
    ZmenaPrvkuPole(pole,0);

    printf("Zmenene pole: \n");
    VypisPole(pole,velikostPole);
    printf("Nejvetsi hodnota v poli je: %d\n",NejvetsiCislo(pole,velikostPole));


    return 0;
}
