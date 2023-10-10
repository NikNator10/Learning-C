#include <stdio.h>

int main(void) {
    int a = 1;
    int b = 2;

    // einfache Verzweigung
    if (a > 0)
        printf("%d ist positiv\n", a);
    
    if (a > 0 && b > 0)
    { // Block führ mehrere Anweisungen
        printf("%d ist noch immer positiv\n", a);
        printf("%d ist positiv\n", b);
    	printf("Beide sind positiv\n");
    }

    // Verzweigung mit Alternative
    if (a > b)
        printf("%d ist groesser als %d", a, b);
    else
        printf("%d ist kleiner gleich %d\n",a, b);
    
    // switch
    switch (a)
    {
    case 1: printf("a ist 1\n"); break; 
    case 2: printf("b ist 2\n"); break;
    default: printf("a ist groesser 2 \n");

    }

    // while Schleife
    a = 1;
    while (a <= 10)
    {
        printf("%d ", a);
        a++; // a = a + 1; oder a+=1;
    }
    
    printf("\n");

    // do while Schleife
    a = 1;
    do
    {
        printf("%d ", a);
        a++;
    } while (a <= 10);

    printf("\n");
    
    // for Schleife
    for(int i = 1; i<= 10; i++)
        printf("%d ", i);
    
    printf("\n");
}