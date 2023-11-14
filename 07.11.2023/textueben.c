#include <stdio.h>

int main()
{
    // Text einlesen (gets_s)
    // Kopie des Textes mit umgedrehten Text erstellen (hallo -> ollah)
    // - Textlänge bestimmen
    // - Schleife von hinten nach vorne, die die Kopie befüllt
    char text[300];
    char text_reverse1[300];
    int len = 0;
    int pos = 0;

    printf("Text eingeben: ");
    gets_s(text);

    // Textlänge bestimmen
    while (text[len] != 0)
        len++;
    
    for (int a = len-1; a >=0; a--) // len -1 da beim letzten Zeichen beginnen
    {
        text_reverse1[pos] = text[a];
        pos++;
    }

    text_reverse1[pos] = 0;  // Kopie abschließen
    printf("Verkehrt: %s\n", text_reverse1);

    // Text drehen im Original ohne eine Kopie zu erstellen
    // 2 Positionen: Start und Ende
    // In einer Schleife die Positionen aufeinander zubewegen bis sie sich treffen
    //          Die 2 Elemente an den aktuellen Positionen vertauschen
    //
    // Basisalgorithmus Vertauschen:
    //          1. Element in den Hilfsspeicher ablegen
    //          2. Element auf das 1. Element legen
    //          Den Hilfsspeicher auf das 2. Element legen

    // 2 Positionen: Start und Ende
    int start = 0;
    int ende = len-1;

    while (ende > start)
    {
        // Vertauschen
        char tmp = text[start];
        text[start] = text[ende];
        text[ende] = tmp;
        // aufeinander zubewegen
        ende--;
        start++;
    }
    printf("Verkehrt: %s\n", text);

}
