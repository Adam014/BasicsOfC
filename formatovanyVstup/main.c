#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Formátovaný vstup - scanf()

    //program naète èíslo, uloží ho do promìnné a vytiskne ho na obrazovku
    int a;


    printf("Zadej cislo: ");
    scanf(" %d",&a); // uloží hodnotu ze stand. vstupu na adresu v pamìti


    if(a%2 == 0)
    {
        printf("cislo je sude");
    }
    else
    {
       printf ("cislo je liche");
    }

    printf("Dekujeme za pouziti naseho programu");

    return 0;
}
