#include <stdio.h>
#include<math.h>

int cateto1, cateto2, ipotenusa;

int main(){
    
    scanf("inserisci %f", cateto1);
    scanf("inserisci %f", cateto2);

    ipotenusa = sqrtf(powf(cateto1, 2) + powf(cateto2, 2));

    printf("%f", ipotenusa);

    return 0
}