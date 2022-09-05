#include <stdio.h>
#include <stdlib.h>

int main()
{
    char slovo[20];
    int pocet;

    printf("Zadej slovo: ");
    scanf("%s", slovo);

    printf("Zadane slovo: %s", slovo);

    for(int i = 0; slovo[i] != '\0'; i++)
    {
        printf("%c\n",slovo[i]);
    }

    printf("Pocet: %d", pocet);

    return 0;
}
