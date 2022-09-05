#include <stdio.h>
#include <stdlib.h>

int main()
{
    // celo��seln� datov� typy - z�stupn� znak d

    // - signed (znam�nkov�)
    // - unsigned (neznam�nkov�)

    signed int celeCislo = -5;
    unsigned int celeCisloKladne = 5;

    short maleCeleCislo ;
    long velkeCislo;
    long long faktVelkeCislo;

    // 32bit int - -1111 1111 1111 1111 0 1111 1111 1111
    // 32bit unsigned int - 1111 1111 1111 1111 1111 1111 1111 1111

    // desetinn� ��sla - z�stupn� znak f

    float desetinneCislo = 5.2; // pouze �est desetinn�ch m�st
    double vestiDesCislo = 5.111111111; // p�esnost na 15 ��slic
    long double nejvetsiCislo = 5.1111111111111111111111111; // p�esnost na 20 ��slic


    // datov� typ pro znaky - char - z�stupn� znak c

    char znak =  'A';
    znak += 32;

    // fce pro form�tovan� v�stup

    prinf("V promenne znak je znak s ASCII hodnotou: %d coz odpovida znaku %c",znak,znak);


    return 0;
}
