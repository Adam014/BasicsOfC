#include <stdio.h>
#include <stdlib.h>

int main()
{
    char slovo[50];

    printf("Zadej slovo: ");
    scanf("%s", slovo);
    palindrom(slovo);
}

int palindrom(char slovo[])
{
    int prvniPismeno = 0;
    int posledniPismeno = strlen(slovo) - 1;

    while (posledniPismeno > prvniPismeno)
    {
        if (slovo[prvniPismeno++] != slovo[posledniPismeno--])
        {
            printf("%s neni palindrom",slovo);
            return 0;
        }
    }
    printf("%s je palindrom",slovo);
}
