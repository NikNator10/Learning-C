// hypthenuse katheten.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.


#include <stdio.h>
#include <math.h>

int main()
{
    float kathete_1, kathete_2;
    float hypothenuse;
    printf("Gib deine 1. Kathete ein:");
    scanf("%f", &kathete_1);
    printf("Gib deine 2. Kathete ein:");
    scanf("%f", &kathete_2);
    hypothenuse = sqrt(pow(kathete_1, 2) + pow(kathete_2,2));
    printf("Eingegebne Werte: K1 = %f, K2 = %f \n", kathete_1, kathete_2);
    printf("Die Hypothenuse ist %.6f", hypothenuse);
    return 1;
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
