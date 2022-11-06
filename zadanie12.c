#include <stdlib.h>
#include <stdio.h>

int main (){

   int a; 

   scanf("%d", &a);

   if (a%2 == 0){
    printf("Dzieli sie przez 2.");
   };

   if(a%3 == 0){
    printf("dzieli sie przez 3");
   }

   if(a%4 == 0){
    printf("dzieli sie przez 4");
   }

   if(a%5 == 0){
    printf("dzieli sie przez 5");
   }

   if(a%6 == 0){
    printf("dzieli sie przez 6");
   } else {printf("nie");}


    return 0;
}