#include <stdio.h>
#include <stdlib.h>

int main()
{
    // celoèíselné datové typy - zástupný znak d

    // - signed (znaménkové)
    // - unsigned (neznaménkové)

    signed int celeCislo = -5;
    unsigned int celeCisloKladne = 5;

    short maleCeleCislo ;
    long velkeCislo;
    long long faktVelkeCislo;

    // 32bit int - -1111 1111 1111 1111 0 1111 1111 1111
    // 32bit unsigned int - 1111 1111 1111 1111 1111 1111 1111 1111

    // desetinná èísla - zástupný znak f

    float desetinneCislo = 5.2; // pouze šest desetinných míst
    double vestiDesCislo = 5.111111111; // pøesnost na 15 èíslic
    long double nejvetsiCislo = 5.1111111111111111111111111; // pøesnost na 20 èíslic


    // datový typ pro znaky - char - zástupný znak c

    char znak =  'A';
    znak += 32;

    // fce pro formátovaný výstup

    prinf("V promenne znak je znak s ASCII hodnotou: %d coz odpovida znaku %c",znak,znak);


    return 0;
}
