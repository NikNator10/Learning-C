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
    // Zufallszahlen starten mit der aktuellen Uhrzeit (time(0))
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

    // Mittelwert = Summe / Anzahl ausgeben
    int sum = 0;
    for (int a = 0; a < MAX; a++)
    {
        sum += zahlen[a];
    }

    printf("Mittelwert: %.2f\n", (float)sum / MAX);

    // Wie viele Zahlen sind größer als der Mittelwert?
    int groesser = 0;
    for (int a = 0; a < MAX; a++)
    {
        if (zahlen[a] > (float)sum / MAX)
        {
            groesser++;
        }
    }
    printf("Es sind %d Zahlen größer als der Mittelwert\n", groesser);

    // Kleinsten Wert (Minimum) ausgeben
    // Lösungsvariable mit dem 1.Element als Startwert
    // Rest der Daten durchlaufen
    //        Ist der aktuelle Wert kleiner als die Lösungvariable
    //              so wird die Lösungvariable mit dem aktuellen Wert überschrieben  

    int min = zahlen[0];
    for (int a = 1; a < MAX; a++)
    {
        if (min > zahlen[a])
            min = zahlen[a];
    }

    printf("Das Minimum ist %d\n", min);

    // Kleinsten Wert (Minimum) ausgeben
    // Lösungsvariable mit dem 1.Element als Startwert
    // Rest der Daten durchlaufen
    //        Ist der aktuelle Wert kleiner als die Lösungvariable
    //              so wird die Lösungvariable mit dem aktuellen Wert überschrieben  

    int max = zahlen[0];
    for (int a = 1; a < MAX; a++)
    {
        if (max < zahlen[a])
            max = zahlen[a];
    }

    printf("Das Maximum ist %d\n", max);




}




