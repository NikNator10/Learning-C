// 2chel dollar.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

void main()
{
	float euro;
	float dollar;
	// Kürzer float euro, dollar;

	printf("Euro eingeben: ");
	scanf("%f", &euro); // %f ... Kommazahl, & vor Variable nicht vergessen

	dollar = euro * 1.06; // Kommasymbol ist der . (englisch)
	printf("%.2f Euro sind %.3f Dollar", euro, dollar);
	// euro - %.2f
	// dollar -> %.3f
	// <Strg><F5>
}

