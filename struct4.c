#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Punkt;

int saRownolegle(Punkt a, Punkt b, Punkt c, Punkt d) {
    double ukos1 = (b.y - a.y) / (b.x - a.x);
    double ukos2 = (d.y - c.y) / (d.x - c.x);
    return (fabs(ukos1 - ukos2) < 1e-9);
}

int main() {
    Punkt a, b, c, d;

    printf("Wprowadz kordynaty x i y pierwszego punktu pierwszej pary: ");
    scanf("%lf%lf", &a.x, &a.y);

    printf("Wprowadz kordynaty x i y drugiego punktu pierwszej pary: ");
    scanf("%lf%lf", &b.x, &b.y);

    printf("Wprowadz kordynaty x i y pierwszego punktu drugiej pary: ");
    scanf("%lf%lf", &c.x, &c.y);

    printf("Wprowadz kordynaty x i y drugiego punktu drugiej pary: ");
    scanf("%lf%lf", &d.x, &d.y);

    if (saRownolegle(a, b, c, d)) {
        printf("Para punktow jest parallel.\n");
    } else {
        printf("Para punktow nie jest rownolegla.\n");
    }

    return 0;
}

