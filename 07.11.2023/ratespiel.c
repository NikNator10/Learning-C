#include <stdio.h>
#include <conio.h>	//getch()
int main()
{
	/*printf("Zeichen: ");
	char zeichen = getch();	// Liest ein Zeichen von der Tastatur, welches nicht angezeigt wird
							// Das Resultat wird in Zeichen abgelegt
	printf("%c hat ASCII-Wert %d", zeichen, zeichen);


	<Enter> ... liefert 2 Zeichen 13 (CR) und 10 (LF)
*/

// User1: Text einlesen wobei jedes 2. Zeichen als * ausgegeben wird (hallo--> h*l*o)
//		Zeichen für Zeichen einlesen bis <Enter> und in Feld merken
// User2: Muss Text von User1 erraten (Versuche zählen)
//		gets_s
//		Vergleichen

	char eingabe = '0';
	char geraten[100];
	char wort[100];
	char verschluesselt[100];
	int a = 0;
	int b = 0;


	printf("Wort: ");


	while (eingabe != ' ') {
		eingabe = getch();
		if (eingabe != '\r') {
			wort[a] = eingabe;
			a++;
		}
		else
			break;
	}
	wort[a] = 0;
	int len = 0;
	while (wort[len] != 0)
		len++;

	
	//printf("Wort: %s", wort);

	while (b <= len) {
		if (b % 2 == 0) {
			
			verschluesselt[b] = wort[b];
			b++;
		}
		else {
			verschluesselt[b] = '*';
			b++;
		}
	}
	verschluesselt[len] = 0;
	printf("\n%s\n", verschluesselt);

	
	
	int versuche = 0;

	int unterschiede;
	do
	{
		printf("Errrrrrrate das Wort: \n");
		gets_s(geraten);

		unterschiede = 0;
		for (int a = 0; a < len; a++)
			if (wort[a] != geraten[a])
				unterschiede++;

				versuche++;
	} while (unterschiede != 0);

	printf("%d Versuche\n", versuche);
}
