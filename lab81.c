#include <stdio.h>

int main(void) {
    int num, i, total, srednia, min, max;

    
    FILE *ifile = fopen("/home/LABPK/akozlowicz/Pobrane/liczby.txt", "r" );
    
    if (ifile == NULL) {
        perror("Error");
        return 1;
    }

    
    i = total = 0;
   
    while(fscanf(ifile, "%d", &num) == 1) {
       
        if (i == 0) {
            min = num;
            max = num;
            total += num;
            ++i;
            continue;
        } 
        if (num < min) {
            min = num;
        } else if (num > max) {
            max = num;
        }
        total += num;
        ++i;
    }

    
    srednia = total/i;

    printf("The sum of all integers in file is %d.\n", total);
    printf("The number of integers in file is %d.\n", i);
    printf("The srednia of all integers in file is %d.\n", srednia);
    printf ("The minimum is %d\n", min);
    printf ("The maximum is %d\n", max);

    fclose(ifile);
    return 0;
}
