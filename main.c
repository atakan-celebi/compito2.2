#include <stdio.h>

int main(void) {
    float a, b , c;

    printf("inserisci la base del triangolo:");
    scanf("%f", &a);
    printf("inserisci l'altezza del triangolo");
    scanf("%f", &b);

    c = (a+b)/2;
    printf("%f", c);
}
