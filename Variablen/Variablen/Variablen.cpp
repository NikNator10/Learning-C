#include <stdio.h>

void main()
{
	int ganz = 12345; // 4 Byte unter ganz verwaltet mit Startwert 12345

	printf("Ganze Zahl: %d\n", ganz); // Ausgabe: ganz wird in %d
									  // \n ... neue Zeile
	printf("Andere ganze Zahl: %d\n", 4312); // Ausgabe: 4312 wird in %d eingesetzt
	printf("Mehrere ganze Zahlen: %d, %d\n", 4321, ganz); // Ausgabe: 4312 wird in das erste %d eingesetzt
														   // der Reihe nach holen die % Daten


	float komma = 123.45; // 4 Byte unter komma verwaltet mit Startwert 123.45
						 // Kommasymbol ist immer . da englisch

	printf("Kommazahl: %f\n", komma);
	printf("Kommazahl: %.2f\n", komma); // 2 Kommastellen
	printf("Kommazahl: %10.2f\n", komma); // 2 Kommastellen mit 10 Stellen rechtsbündig

	printf("Ganze Zahl: ");
	scanf("%d", &ganz); // Vor Variable immer &, nur einfache Formatierungen
	printf("Eingegebene Zahl: %d\n", ganz); // Ausgabe: ganz wird in % d eingesetzt

	printf("Kommazahl: ");
	scanf("%f", &komma); // Vor Variable immer &, nur einfache Formatierungen
	printf("Eingegebene Zahl: %f\n", komma); // Ausgabe: ganz wird in % d eingesetzt

	char zeichen = 'a'; // 'Zeichen' wandelt das Zeichen in ASCII Code 
	printf("Das Zeichen %c hat den ASCII Code %d\n", zeichen, zeichen);
}