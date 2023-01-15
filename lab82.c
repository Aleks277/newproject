#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *wskaznik;
   FILE *wskaznik2;

   wskaznik = fopen("/home/LABPK/akozlowicz/Pulpit/parzyste.txt","w");
   wskaznik2 = fopen("/home/LABPK/akozlowicz/Pulpit/nieparzyste.txt","w");

   if(wskaznik == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Podaj numer: ");
   scanf("%d",&num);

   if(num % 2 == 0){
     fprintf(wskaznik,"%d",num);
   } else {
    fprintf(wskaznik2,"%d",num);
   }

   fclose(wskaznik);

   return 0;
}


