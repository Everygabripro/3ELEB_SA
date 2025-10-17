#include<stdio.h>
#include<stdlib.h>

int distanza;

int main(){
    scanf("%f", distanza);
    printf("la distanza in metri è di %f m", distanza);
    printf("in kilometri è di %f km", distanza*1000);
    printf("in centimetri è di %fcm", distanza/100);
    printf("in millimetri è di %fmm", distanza/1000);

    return 0;
}