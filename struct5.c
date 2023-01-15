#include <stdio.h>
#include <math.h>



void sprawdz() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    printf("Wprowadz koordynaty 1: ");
    scanf("%d %d", &x1, &y1);
    printf("Wprowadz koordynaty 2: ");
    scanf("%d %d", &x2, &y2);
    printf("Wprowadz koordynaty 3: ");
    scanf("%d %d", &x3, &y3);
    printf("Wprowadz koordynaty 4: ");
    scanf("%d %d", &x4, &y4);

    double d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double d3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    double d4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

    if(d1 == d2 && d2 == d3 && d3 == d4 && d1 == d4){
        printf("To jest kwadrat\n");
    }else if((d1 == d3 && d2 != d4) || (d1 != d3 && d2 == d4)){
        printf("To jest trapez\n");
    }else if(d1 == d4 && d2 == d3){
        printf("To jest rownoleglovbok\n");
    }else{
        printf("To nie jest a kwadrat, trapez or rownoleglovbok\n");
    }
};

int main(){

    sprawdz();
}
