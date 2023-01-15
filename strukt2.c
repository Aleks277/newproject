#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    struct punkt {
    double x;
    double y;
    };

    struct punkt p1, p2;
    p1.x = 45;
    p1.y = 12;
    p2.x = 1;
    p2.y = 0;
 
    double a = (p2.y - p1.y) / (p2.x - p1.x);

    double b = p1.y - a * p1.x;

    printf("y = %fx + %f\n", a, b);

 return 0;
}