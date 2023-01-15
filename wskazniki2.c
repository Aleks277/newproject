#include <stdlib.h>
#include <stdio.h>

int tab[] = {1,2,3,4,5,6,7,8,9,10};

void modyfikuj(int *tab){
    for(int i = 0; i < 10; i++){
        printf("%d\n", *tab+i);
    };
}

int main(){
    modyfikuj(tab);
    return 0;
}
