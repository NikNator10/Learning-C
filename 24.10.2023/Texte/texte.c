#include <stdio.h>

// Texte werden als Felder mit dem Datentyp char verwaltet.
// Das letzte Zeichen im Text ist das Zeichen '\0' (Ascii Wert 0).

int main()
{
    char text1[] = { 'H', 'a', 'l', 'l', 'o', '\0' }; // Speicher für 5 Zeichen + '\0 (6 Byte)
    char text2[] = "Hallo Welt!";                   // 12 Byte Speicher
    char text3[100];                                // 100 Byte Speicher

    printf("%s %s\n", text1, text2);                // %s ... Text mit 0 abgeschlossen

// printf("Text eingeben: ");
// scanf("%s", &text3[0]);
// scanf("%s", text3[0]);   
                                                    // scanf mit %s bricht beim 1.Leerzeichen ab
    printf("Text eingeben: ");
    gets_s(text3);    	                            // Liest auch Leerzeichen ein

    printf("%s\n", text3);

    // Wie lange ist der Text (Zeichen bis '0\')
    int len = 0;
    while (text3[len] != 0)
        len++;
    // for (len = 0; text3[len] != 0; len++); nicht elegante Möglichkeit, da len vorher definiert werden muss und die leere Anweisung
    //                                        wird wiederholt
    printf("Meine Eingabe ist %d Zeichen lang\n", len);
}