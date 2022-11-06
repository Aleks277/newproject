#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Bok a: ");
    scanf("%d", &a);

    printf("Bok b: ");
    scanf("%d", &b);

    int obwod = 2*a + 2*b;
    int pole = a*b; 

    printf("Obwod= %d \n", obwod);
    printf("Pole= %d \n", pole);


    return 0;
}