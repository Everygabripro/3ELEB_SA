#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int massa, velocità, Ec;

int main(){
    scanf("inserisci %f", &massa);
    scanf("inserisci %f", &velocità);

    Ec = 0.5 * massa * powf(velocità, 2);

    printf("l'energia cinetica è %.2f", Ec);

    return 0;
}