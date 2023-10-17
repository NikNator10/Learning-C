// Projekt Zahlenalanylse
// - Feld mit 100 Elementen erzeugen
// - Jedes Element íst ein Zufallswert zwischen 100 und 1000
// - 10 Werte pro Zeile ausgeben

#include <stdio.h>
#include <stdlib.h> // srand, rand
#include <time.h> // time

#define MAX 100
// Präprozessoranweisung #define ersetzt alle Texte (Max) durch den Wert dahinter vor der Übersetzung
// in Maschinensprache (CPU Befehle)

int main()
{
    // Zufallszahlen starten mit der aktuellen Uhrzeit (time(0)
    srand(time(0));

    // rand() bestimmt eine Zufallszahl bis ca. 4 000 000 000 
    // Mit dem Modulo Operator(%) kann man die Zufallsahl in einem gewünschten Bereich bringen
    printf("Wuerfeln: %d\n", rand() % 6 + 1);

    int zahlen[MAX];
    for (int a = 0; a < MAX; a++) {
        zahlen[a] = rand() % 901 + 100; // 901 Werte + 100 -> 100 ... 1000
    }
        
    for (int a = 0; a < MAX; a++)
        if (a % 10 == 9)
            printf("%5d\n", zahlen[a]);
        else
        {
            printf("%5d", zahlen[a]);
        }
}
     