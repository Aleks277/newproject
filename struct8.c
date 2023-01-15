#include <stdio.h>
#include <string.h>


void usun(char* str, char element) {
    int i, j;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] == element) {
            for (j = i; j < len - 1; j++) {
                str[j] = str[j + 1];
            }
            str[len - 1] = '\0';
            return;
        };
    };
};



int main() {
    char str[] = "Aleksander";
    usun(str, 'e');
    printf("%s\n", str);
    return 0;
};