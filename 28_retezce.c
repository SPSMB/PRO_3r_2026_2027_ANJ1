#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	//char str[30] = "Testovaci data 123456";
	char s[30];
	memset(s, '*', sizeof(s));
	s[29] = '\0';
	printf(">%s<\n", s);
	
	// nacitani retezce s mezerami - 1. reseni nefunguje
	char jmeno[100];
	printf("Zadej jmeno a prijmeni: ");
	//scanf("%s", jmeno);
	//printf("Jmeno je: %s\n", jmeno);
	
	// 2. reseni - fgets
	// fgets(jmeno, 100, stdin);
	
	// 3. reseni - scanf
	scanf("%[^\n]%*c", jmeno);

	printf("Jmeno je: >%s<\n", jmeno);

	return 0;
}





