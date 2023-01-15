#include <stdio.h>
#include <stdlib.h>

struct Punkt {
    int x;
    int y;
    struct Punkt *nastepny;
};

void pokazpunkty(struct Punkt *head) {
    struct Punkt *obecny = head;
    while (obecny != NULL) {
        printf("(%d, %d) ", obecny->x, obecny->y);
        obecny = obecny->nastepny;
    };
};

int main() {
    struct Punkt *head = NULL;
    struct Punkt *obecny = NULL;
    int x, y;
    printf("Enter the punkty (x, y), (0, 0) to stop: ");
    scanf("%d%d", &x, &y);
    while (x != 0 && y != 0) {
        struct Punkt *nowyPunkt = (struct Punkt*)malloc(sizeof(struct Punkt));
        nowyPunkt->x = x;
        nowyPunkt->y = y;
        nowyPunkt->nastepny = NULL;
        if (head == NULL) {
            head = nowyPunkt;
            obecny = nowyPunkt;
        } else {
            obecny->nastepny = nowyPunkt;
            obecny = nowyPunkt;
        }
        scanf("%d%d", &x, &y);
    }
    pokazpunkty(head);
    return 0;
}
