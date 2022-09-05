#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pocetradku;
    int pocetsloupcu;
    char a1;
    char a2;
    int pocetznaku1=0;
    int pocetznaku2=0;
    int x;
    int y;

    printf("Zadej pocet radku:");
    scanf(" %d",&pocetradku);
    printf("Zadej pocet sloupcu:");
    scanf(" %d",&pocetsloupcu);
    printf("Zadej prvni znak:");
    scanf(" %c",&a1);
    printf("Zadej druhy znak:");
    scanf(" %c,&a2");

    for(x=1;x<=pocetradku;x++)
    {
        for(y=1; y<=pocetsloupcu;y++)
        {
            if(y % 2 == 0)
            {
                printf("%c ",a1);
                pocetznaku1++;
            }
            else
            {
                printf("%c ",a2);
                pocetznaku2++;
            }
        }
        printf("\n");
    }
    printf("Bylo vytisteno %d znaku %c.\n", pocetznaku1,a1);
    printf("Bylo vytisteno %d znaku %c.\n", pocetznaku2,a2);



}
