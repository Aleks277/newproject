#include<stdio.h>
#include<stdlib.h>

int main()
{

    printf("Hello World \n");

    int a, b;
    printf("Pierwsza libcza: ");
    scanf("%d", &a);

    printf("Druga liczba: ");
    scanf("%d", &b);

    printf("\n Dodawanie", a, b);
    printf(" = %d",(a+b));

    printf("\n Odejmowanie", a, b);
    printf(" = %d",(a-b));

    printf("\n Mnozenie", a, b);
    printf(" = %d",(a*b));

    printf("\n Dzielenie", a, b);
    printf(" = %d",(a/b));

    printf("\n Reszta z dzielenia", a, b);
    printf(" = %d",(a%b));
  
    return 0;
}