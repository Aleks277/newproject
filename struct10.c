#include <string.h>
#include <stdio.h>

int check_same_point(char* str) {
    char first = str[0];
    char last = str[strlen(str) - 1];
    return first == last;
}


int main() {
    char str[] = "kaja";
    if (check_same_point(str)) {
        printf("Pierwsza i ostatnia litera zawiera to samo.\n");
    } else {
        printf("Pierwsza i ostatnia litera nie zawiera tego samego.\n");
    }
    return 0;
}