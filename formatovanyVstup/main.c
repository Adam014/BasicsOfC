#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Form�tovan� vstup - scanf()

    //program na�te ��slo, ulo�� ho do prom�nn� a vytiskne ho na obrazovku
    int a;


    printf("Zadej cislo: ");
    scanf(" %d",&a); // ulo�� hodnotu ze stand. vstupu na adresu v pam�ti


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
