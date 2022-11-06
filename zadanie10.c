#include <stdlib.h>
#include <stdio.h>

int main (){

    int a, b, c;

    //pierwszy bok
    scanf("%d", &a);
    //drugi bok
    scanf("%d", &b);
    //trzeci bok
    scanf("%d", &c);

    if (a < b+c){
        printf("trojkat.");};
    if (c < b+a){
        printf("trojkat.");}
    if (b < a+c){
        printf("trojkat.");
    } else {
        printf("nie trojkat");
    };

    return 0;
}