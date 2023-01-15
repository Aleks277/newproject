#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 100

char tab[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't'};


void wypisz(){
    for(int i = 0; i < sizeof(tab)/sizeof(tab[0]); i++){
        printf("%c \n", tab[i]);
    }
};

void czyjest(int x){

    int liczba;
    int reszta;
    int cyfra;

    if(sizeof(tab) == x){
        printf("Nie ma miejsca na nowy znak.");
    } else if (sizeof(tab) != x){
        printf("Podaj litere jaką chcesz wprowadzić od 0 do 255: ");
        scanf("%d", &liczba);
            if(liczba < 256 && liczba >=0){
                int a = liczba;
                char c = a;
                printf("%c", c);

            } else {

                printf("Czy podać znak odpowiadajacy reszcie dzielenia tej liczby przez 256? \n");
                printf("Jeżeli tak daj 1 a nie daj 0: ");
                scanf("%d", &cyfra);
                
                    if(cyfra == 1){
                        reszta = liczba % 256;
                        printf("%d \n", reszta);
                    } else {
                        printf("Koniec \n");
                    };
            }
    };
};

void index(){

    int arr[MAX_SIZE];
    int i, rozmiar, pozycja;

    printf("Podaj rozmiar tablicy : ");
    scanf("%d", &rozmiar);
    printf("Elementy w tablicy: ");
    for(i=0; i<rozmiar; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Element do susniecia (numer) : ");
    scanf("%d", &pozycja);


    if(pozycja < 0 || pozycja > rozmiar)
    {
        printf("Zla pozycja podaj poprawna od 0 do %d", rozmiar);
    }
    else
    {
       
        for(i=pozycja-1; i<rozmiar-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        
        rozmiar--;

        printf("\nElementy tablicy po usunieciu : ");
        for(i=0; i<rozmiar; i++)
        {
            printf("%d\t", arr[i]);
        }
    }


};

int kolumny(){
    int kolumna;
    char nowaTablica = {a, b, c, d, e, f, g, h};

    printf("Podaj ile kolimn dla tablicy: [a, b, c, d, e, f, g, h]");
    scanf("%d", kolumna);


  int i,j;
  for(i=0;i<5;i++)
  {
     for(j=0+20*i;j<20+20*i;j++)
     {
       printf("%c",string1[j]);
     }

     printf("\t");

     for(j=0+20*i;j<20+20*i;j++)
     {
       printf("%c",string2[j]);}
}


int main (){

    int n = 21; 
    char znak;
    int usun;

    printf("Podaj co chcesz zrobic: e, w, d, u, s, t \n");
    scanf("%c", &znak);


    switch (znak){
        case 'e':
            printf("dadas");
        break;

        case 'w': 
            wypisz();
        break; 

        case 'd': 
            czyjest(n);
        break;

        case 'D':
            czyjest(n);
        break;

        case 'u':
            index();
        break;

        case 't':
            kolumny();
        break;



    return 0; 
}}