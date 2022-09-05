#include <stdio.h>
#include <stdlib.h>

int main()
{
    int poleCelychCisel[3];
    poleCelychCisel[0] = 2;
    poleCelychCisel[1] = 5;
    poleCelychCisel[2] = poleCelychCisel[0] + poleCelychCisel[1];

    int pole2[] = {2,5,6,7,8,3};

    float poleDes[] = {5.2, 3.4, 6.8};

    int velikost;
    prinf("Jak velke pole mam vytvorit? ");
    scanf(" %d,&velikost");

    int poleVelikost[velikost];

    return 0;
}
