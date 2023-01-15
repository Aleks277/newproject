#include <stdlib.h>
#include <stdio.h>


int main(){
    int tab[] = {1,2,3,4,5,6,7,8};

    for (int i = 0; i < 8; i++){
        printf("%d\n", *tab+i);
    }
}
