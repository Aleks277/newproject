#include <stdlib.h>
#include <stdio.h>

int liczba = 122;

int przyjmij(int liczba, int numer){

    printf("1 liczba: %p\n", &liczba);
    printf("2 liczba: %p\n", &numer);

    return 0;
}

int main(void){

    int numer = liczba;
    printf("Liczba: %p\n", &liczba);
    printf("Liczba: %p\n", &numer);

    przyjmij(liczba, numer);
    return 0;
}

