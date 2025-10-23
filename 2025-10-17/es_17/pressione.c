#include <stdio.h>
#include <stdlib.h>

int forza, area, pressione;

int main() {
    scanf("inserisci la forza: %f", &forza);
    scanf("inserisci la area: %f", &area);

    pressione = forza / area;

    printf("%d", pressione);

    return 0;
}