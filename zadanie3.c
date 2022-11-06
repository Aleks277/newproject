#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Pierwsza liczba: ");
    scanf("%d", &a);

    printf("Druga liczba: ");
    scanf("%d", &b);

    if(a>b){
        printf("Liczba %d, jest wieksza. \n", a);
    } else if(b>a){
        printf("Liczba %d ,jest wieksza. \n", b);
    } else{
        printf("Liczby sa rowne. \n");
    };


    return 0;
}