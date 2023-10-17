#include <iostream>

int main()
{
    int feld[] = { 1,2,3,4,5,6,7,8,9,10 }; // Feld mit 10 Werten erzeugen

    for (int a = 0; a < sizeof(feld) / sizeof(int); a++) {
        printf("%d ", feld[a]);
    }
    printf("\n");

    // Werte 20, 19 ... 11 ausgeben

    for (int a = 0; a < sizeof(feld)/sizeof(int); a++){
        feld[a] = 20 - a;
        printf("%d ", feld[a]);
    }
    printf("\n");

}
