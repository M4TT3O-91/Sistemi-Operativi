/*
 ============================================================================
 Name        : CountChars.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	// ESERCIZIO 1:
	// leggi da stdin fino a EOF e conta i caratteri: '\n', '\t' e ' ' (spazio)
	// dopo EOF, scrive su stdout il numero di occorrenze di ciascuno dei tre caratteri sopra

	int c;
	int special_counter[3] = { 0 };

	while ((c = getchar()) != EOF) {
		switch (c) {
		case '\n':
			special_counter[0]++;
			break;
		case '\t':
			special_counter[1]++;
			break;
		case ' ':
			special_counter[2]++;
			break;
		default:
			break;
		}
	}
	printf("Sono stati letti: \n"
			"\n: %d volte\n"
			"\t: %d volte\n"
			"' ': %d volte",special_counter[0],special_counter[1],special_counter[2]);

	return EXIT_SUCCESS;
}
