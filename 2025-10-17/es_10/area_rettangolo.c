#include <stdio.h>

int base, altezza, area, perimetro;

int main(){
    scanf("inserisci %f", &base);
    scanf("inserisci %f", &altezza);

    perimetro = (base + altezza)*2 ;
    area = base * altezza ;
    
    printf("%f", perimetro);
    printf("%f", area);

    return 0;
}