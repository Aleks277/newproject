#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){


    struct kontakt {
    char imie[50];
    char nazwisko[50];
    char numer_tel[50];
    };

    struct kontakt osoba1;
    strcpy(osoba1.imie, "Anna");
    strcpy(osoba1.nazwisko, "Kowalska");
    strcpy(osoba1.numer_tel, "555-555-5555");

    struct kontakt osoba2;
    strcpy(osoba2.imie, "Andrzej");
    strcpy(osoba2.nazwisko, "Kowalski");
    strcpy(osoba2.numer_tel, "555-555-5556");

    printf("imie: %s\n", osoba1.imie);
    printf("nazwisko: %s\n", osoba1.nazwisko);
    printf("nr-tel: %s\n", osoba1.numer_tel);
    printf("\n");

    printf("imie: %s\n", osoba2.imie);
    printf("nazwisko: %s\n", osoba2.nazwisko);
    printf("nr-tel: %s\n", osoba2.numer_tel);




    return 0;
}