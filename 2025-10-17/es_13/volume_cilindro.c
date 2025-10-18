#include <stdio.h>
#include <mat.h>

int raggio, altezza, volume;

int main(){
    scanf("inserisci %f", raggio);
    scanf("inserisci %f", altezza);

    volume = M_PI(powf(raggio)* altezza);

    printf("%f", volume);

    return 0;
}