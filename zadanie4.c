#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Pierwsza liczba: ");
    scanf("%d", &a);

    printf("Druga liczba: ");
    scanf("%d", &b);

    printf("Druga liczba: ");
    scanf("%d", &c);

    if(a>b){
        printf("Liczba %d, jest najwieksza. \n", a);
    } else if(b>a){
        printf("Liczba %d ,jest najwieksza. \n", b);
    } else if(a>c){
        printf("Liczba %d ,jest najwieksza. \n", a);}
     else if(b>c){
        printf("Liczba %d ,jest najwieksza. \n", b);
    } else if(c>a){
        printf("Liczba %d ,jest najwieksza. \n", c);
    } else if(c>b){
        printf("Liczba %d ,jest najwieksza. \n", c);
    }


    return 0;
}