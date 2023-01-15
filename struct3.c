#include <stdio.h>
#include <math.h>


typedef struct Punkt {
    int x;
    int y;
} Punkt;

typedef struct Trojkat {
    Punkt punkt1;
    Punkt punkt2;
    Punkt punkt3;
} Trojkat;

int czyistnieje(Trojkat trojkat) {
    double a = sqrt(pow(trojkat.punkt1.x - trojkat.punkt2.x, 2) + pow(trojkat.punkt1.y - trojkat.punkt2.y, 2));
    double b = sqrt(pow(trojkat.punkt2.x - trojkat.punkt3.x, 2) + pow(trojkat.punkt2.y - trojkat.punkt3.y, 2));
    double c = sqrt(pow(trojkat.punkt3.x - trojkat.punkt1.x, 2) + pow(trojkat.punkt3.y - trojkat.punkt1.y, 2));
    if (a + b > c && a + c > b && b + c > a) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    Trojkat trojkat = {{0,0}, {3,4}, {5,0}};
    if (czyistnieje(trojkat)) {
        printf("The trojkat is valid.\n");
    } else {
        printf("The trojkat is not valid.\n");
    }
    return 0;
}
