#include <stdio.h>

int main(void) {
    // Die Zahlen von 15 bis 25 ausgeben
    for(int a = 15; a <= 25; a++) // a nur in Schleife gültig
        {
            printf("%d \n", a);
        }

    printf("\n");
    
    // Die Zahlen von 15 bis 25 ausgeben, die durch 3 teilbar sind
    // Teilbarkeit  mit Divisionrest (Modulo) auf 0 prüfen: Zahl % Teilbarkeit == 0
    for(int a = 15; a <= 25; a++)
        if (a % 3 == 0)
            printf("%d ", a);
    
    printf("\n");

    // Basisalgorithmus Zählen (90 % aller Programme):
    // Ergebnis (Variable) mit Startwert 0 definieren
    // Schleife
    //      [Bedingung prüfen mit Verzweigung]
    //                  Ergebnis um 1 erhöhen    

    // Die Anzahl der Zahlen von 15 bis 25 ausgeben, die durch 3 teilbar sind

    int ergebnis = 0;
    for(int a = 15; a <= 25; a++)
        if (a % 3 == 0)
           ergebnis++;
           
    printf("%d Zahlen von 15 bis 25 sind durch 3 teilbar.\n", ergebnis);
        
    // Basisalgorithmus Summe (10 % aller Programme):
    // Ergebnis (Variable) mit Startwert 0 definieren
    // Schleife
    //      [Bedingung prüfen mit Verzweigung]
    //                  Ergebnis um den aktuellen Wert erhöhen   
    //
    // Die Summe der Zahlen von 15 bis 25 ausgeben, die durch 3 teilbar sind

     ergebnis = 0;
    for(int a = 15; a <= 25; a++)
        if (a % 3 == 0)
           ergebnis+=a; // ergebis = ergebnis + a;

    printf("%d ist die Summe der Zahlen von 15 bis 25, die durch 3 teilbar sind. \n", ergebnis);
    

    // Basisalgorithmus Produkt:
    // Ergebnis (Variable) mit Startwert 0 definieren
    // Schleife
    //      [Bedingung prüfen mit Verzweigung]
    //                  Ergebnis mit dem aktuellen Wert multipliziert   
    //
    // Das Produkt der Zahlen von 15 bis 25 ausgeben, die durch 3 teilbar sind

     ergebnis = 1;
    for(int a = 15; a <= 25; a++)
        if (a % 3 == 0)
           ergebnis*=a; // ergebins = ergebnis + a;

    printf("%d ist das Produkt der Zahlen von 15 bis 25, die durch 3 teilbar sind. \n", ergebnis);
}