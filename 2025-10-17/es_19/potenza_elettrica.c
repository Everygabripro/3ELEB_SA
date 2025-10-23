#include <stdio.h>
#include <stdlib.h>

int tensione, corrente, potenza;

int main() {
    scanf("inserisci la tensione: %f", tensione);
    scanf("inserisci la corrente: %f", corrente);
    
    potenza = tensione * corrente;

    printf("%f", potenza);

    return 0;
}