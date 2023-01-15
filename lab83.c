#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void sprawdzimie (char *word){
    FILE* file = fopen("/home/LABPK/akozlowicz/Pobrane/dane.txt", "r");
    char line[1000] = "";

    if(file != NULL){
        while(fgets(line, 1000, file) != NULL){

            if (strcmp(line, word) == 0){
                printf("hello");           
             }
        }
    }
    fclose(file);
}



int main()
{
   int num;
   char imie[30], nazwisko[30];

   printf("Podaj imie: \n");
   scanf("%s", imie);



   sprawdzimie(imie);
}

