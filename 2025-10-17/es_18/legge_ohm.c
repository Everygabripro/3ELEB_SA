#include <stdio.h>
#include <stdlib.h>

int resistenza, tensione, corrente;

int main() {
    scanf("inserisci la resistenza: %f", resistenza);
    scanf("inserisci la tensione: %f", tensione);

    corrente = tensione / resistenza;

    printf("%f", corrente);

    return 0;
}