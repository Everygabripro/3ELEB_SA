#include <stdio.h>

int temperatura, fahrenheit, kelvin;

int main(){
    scanf("inserisci %f", temperatura);

    fahrenheit = temperatura * 1.8 + 32;
    kelvin = temperatura +273.15;

    printf("%d", fahrenheit);
    printf("%d", kelvin);

    return 0;
}