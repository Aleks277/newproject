#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int gora_lewe_x;
    int gora_lewe_y;
    int dolne_prawe_x;
    int dolne_prawe_y;
} Kwadrat;

bool point_in_kwadrat(Kwadrat kwadrat, int x, int y) {
    if(x >= kwadrat.gora_lewe_x && x <= kwadrat.dolne_prawe_x && y >= kwadrat.gora_lewe_y && y <= kwadrat.dolne_prawe_y)
        return true;
    else
        return false;
}

int main() {
    Kwadrat kwadrat;
    printf("Wprawdz gorne lewe x: ");
    scanf("%d", &kwadrat.gora_lewe_x);
    printf("Wprawdz gorne lewe y: ");
    scanf("%d", &kwadrat.gora_lewe_y);
    printf("Wprowadz dolne prawe x: ");
    scanf("%d", &kwadrat.dolne_prawe_x);
    printf("Wprowadz dolne prawe y: ");
    scanf("%d", &kwadrat.dolne_prawe_y);

    int x, y;
    printf("Wprowazd punkt x : ");
    scanf("%d", &x);
    printf("Wprowazd punkt y : ");
    scanf("%d", &y);

    if(point_in_kwadrat(kwadrat, x, y))
        printf("Punkt jest w srodku kwadrat.\n");
    else
        printf("Punkt jest na zewnatrz kwadrat.\n");

    return 0;
}
