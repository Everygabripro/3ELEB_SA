#include <stdio.h>
#include <stdlib.h>

int n1, n2, n3, p1, p2, p3, M;

int main() {
    scanf("inserisci n1: %f", n1);
    scanf("inserisci n2: %f", n2);
    scanf("inserisci n3: %f", n3);

    scanf("inserisci p1: %f", p1);
    scanf("inserisci p2: %f", p2);
    scanf("inserisci p3: %f", p3);
    
    M = (n1 + n2 + n3)/(p1 + p2 + p3);

    printf("%f", M);
    
    return 0;
}