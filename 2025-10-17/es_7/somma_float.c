#include<stdio.h>
#include<stdlib.h>

int a, b, somma, differenza, prodotto, divisione;

int main(){
    scanf("%d", a);
    scanf("%d", b);
    
    float somma = (float) a + b; 
    float differenza = (float) a - b; 
    float prodotto = (float) a * b; 
    float divisione = (float) a / b; 

    printf("%f"\n "%f"\n "%f"\n "%f"\n, somma, differenza, prodotto, divisione);

    return 0;
}