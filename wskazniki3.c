#include <stdlib.h>
#include <stdio.h>

void zamien(int *a, int *b)
{
    int pom = *a;
        *a = *b;
        *b = pom;

    
    printf("%p\n", &a);
    printf("%p\n", &b);

}

int main(){

    int liczba = 1;
    int numer = 2;

    printf("Liczba a: %p\n", &liczba);
    printf("Liczba b: %p\n", &numer);

    zamien(&liczba, &numer);
    return 0;
}