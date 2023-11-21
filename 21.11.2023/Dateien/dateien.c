
#include <stdio.h>

void main()
{
    FILE* fh; // Filehandler: Dient zu Verwaltung einer Datei
    char zeile[255];

    // fopen liefert die Dateiverwaltung
    // fopen(Dateiname, Modus)
    // Dateiname: Feld von Zeichen
    // Modus "w": Datei erzeugen oder Inhalt löschen
    // Modus "r+": Datei lesen und schreiben
    // Die aktuelle Lese-/Schreibposition wird auf den Anfang gesetzt
    fh = fopen("hallo.txt", "w");
    if (fh != 0)
    {
        // fprinf(Dateiverwaltung, "Formatierung", Variablen/Werte)
        // wird printf nut mit dem Parameter Dateiverwaltug mehr
        fprintf(fh, "Hallo Welt!\n");
        fprintf(fh, "%s\n", "Dateien sind einfach"); 
        fclose(fh); // Datei schließen (sonst ist die Datei kaputt)
    }
    else
    {
        printf("Datei kann nicht erzeugt werden\n");
    }

    fh = fopen("hallo.txt", "r+");
    if (fh != 0)
    {   
        // foef() ... prüft ob die aktuelle Lese-/Schreibposition am Ende ist
        while (!feof(fh))
        {
            zeile[0] = 0; // Zeileninhalten löschen
            // fgets liest eine Zeile aus einer Textdatei
            // fgets(Text, Maximale Anzahl von Zeichen, Dateiverwaltung
            fgets(zeile, 255, fh);
            printf("%s", zeile);

        }

        printf("Und noch einmal\n");
        // fseek ... ändert die aktuelle Lese-/Schreibposition
        // fseek(Dateiverwaltung, Sprungweite in Bytes, Modus)
        // Modus SEEK_SET: Geht vom Dateianfang weg
        // Modus SEEK_CUR: Geht von der aktuellen Lese-/Schreibposition aus
        // Modus SEEK_END: Geht vom Dateiende aus
        fseek(fh, 0, SEEK_SET);
        while (fgets(zeile, 255, fh))
            printf("%s", zeile);


        fclose(fh); // Datei schließen (sonst ist die Datei kaputt)
    }
    else
    {
        printf("Datei kann nicht erzeugt werden\n");
    }
    fread();
}

// fread(Feld, Bytes, Wiederholungen, Dateiverwaltung) ... Liest Wiederholungen * Bytes Daten binär aus der Datei
// fwrite(Feld, Bytes, Wiederholungen, Dateiverwaltung) ... Liest Wiederholungen * Bytes Daten binär aus der Datei