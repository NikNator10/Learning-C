#include "stdio.h"
// Projekt Buchstabenlöschen
// - Text eingeben
// - Buchstabenposition angeben
// - Buchstaben aus Text löschen
// 1. Variante: Hilfsfeld
//      Text in 2. Feld (Hilfsfeld) kopieren ohne den Buchstaben ander Buchstabenposition
//       Hilfsfeld zurückkopieren
// 2. Variante: ohne Hilfsfeld
//		Text ab der Position um 1 Element vor kopieren
// zB: Text: Halllo Position: 3 -> Hallo
int main(){
	
	char text[100];
	char kopie[100];
	int pos;

	printf("Text: ");
	gets_s(text);

	printf("Position ");

	scanf("%d", &pos);
	// 1.Variante: Hilfsfeld
	// Hilfsfeld erstellen
	for (int a = 0; text[a] != 0; a++)
		if (a < pos - 1)			// pos - 1 da Index bei 0 anfängt
			kopie[a] = text[a];
		else
			kopie[a] = text[a + 1]; //Textende ('\0') wird mitkopiert
			 
	// Hilfsfeld zurückkopieren
	int b;
	for (b = 0; kopie[b] != 0; b++)
		text[b] = kopie[b];

	text[b] = 0;					// Textende neu setzen

	printf("%s\n", text);

	printf("Position ");

	scanf("%d", &pos);

	// 2. Variante:ohne Hilfsfeld
	for (b = pos; text[b] != 0; b++)
		text[b - 1] = text[b];
	text[b - 1] = 0;			// Textende
	printf("%s\n", text);



}