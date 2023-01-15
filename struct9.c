

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char nazwa_pliku[100], str[100];

    printf("Sciezka pliku: ");
    scanf("%s", nazwa_pliku);

    fp = fopen(nazwa_pliku, "r");
    if (fp == NULL) {
        printf("Blad: %s\n", nazwa_pliku);
        return 1;
    }

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s\n", str);
    }

    fclose(fp);
    return 0;
}