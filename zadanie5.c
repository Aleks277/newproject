#include <stdio.h>
 int main(){
    int a;
   printf("Year: ");
   scanf("%d", &a);

    if((a % 4 == 0 && a % 100 !=0) || (a % 400 == 0)){
        printf("Rok przestepny");
    } else {
        printf("Nie przestepny");        
    };

    return 0;
 }
 