#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c;
    printf("Insert day: ");
    scanf("%d", &a);

    printf("Insert month: ");
    scanf("%d", &b);

    printf("Insert year: ");
    scanf("%d", &c);

    if((a>31 || a<1) || (b>12 || b<1) || (c<0)){
        printf("It is not a date, or it might not be a day");
    } else if ((a>29) && (b == 2)){
        printf("it is not a date it does not exist");
    }; 



    return 0;
}