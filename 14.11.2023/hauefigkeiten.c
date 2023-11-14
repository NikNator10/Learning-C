#include <stdio.h>
#include <stdlib.h> // srand, rand
#include <time.h> // time

    // Beispiel Würfelhäufigkeiten
    // - 100 mal Würfeln
    // - Häufigkeiten der Zahlen in einem Feld
    // - Ausgabe: 1 - > 9 mal
    //            2 - > 11 mal
    //            ...
    //            6 - > 12 mal

int main() {

    int x = 0;
    int werte[6] = { 0, 0, 0, 0, 0, 0 };
    srand(time(0));

    for(int y = 0; y <= 100; y++) {

        x = rand() % 6 + 1;

        werte[x - 1]++;

    }

    for (int b = 0; b <= 5; b++) {
        printf("%d wurde %d gewuerfelt\n", b + 1, werte[b]);
    }

}