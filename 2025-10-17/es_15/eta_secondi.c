#include<stdio.h>
#include<stdlib.h>

int eta, secondi;

int main(){
    scanf("inserisci %d", &eta);
    secondi = eta * 356 * 24 * 60 * 60;
    printf("%d", secondi);

    return 0;
}