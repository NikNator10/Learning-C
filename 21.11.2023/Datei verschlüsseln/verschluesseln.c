#include "stdio.h"
// Projekt verschlüsseln
// Dateiname eingeben
// - Daten aus der Datei laden
// - Daten mit Cäser 7 (+7 zum ASCII Wert) am Bildschirm ausgeben

void main()
{
    FILE* fh;
    char zeile [255];
    char datei[100];

    printf("Datei: ");
    gets_s(datei);

    fh = fopen(datei, "r+");
    if (fh != 0)
    {
        while (fgets(zeile, 255, fh))
        {
            for (int a = 0; zeile[a] != 0; a++)
            {
                printf("%c", zeile[a] + 7); // + 7 ... Cäsar 7
            }
            fclose(fh);
        }
        
    }
    else
    {
        printf("Datei kann nicht geöfffnet werden\n");
    }
}