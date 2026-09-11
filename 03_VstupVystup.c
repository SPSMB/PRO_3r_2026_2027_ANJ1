
#include <stdio.h>

int main(){
	
	int prumer;
	/*int cislo1, cislo2, cislo3;*/
	printf("Zadej prumer: ");
	scanf("%d", &prumer);
	printf("Zadany prumer je %d\n", prumer); 
	
	char str[80];
	printf("Zadej svoje jmeno: ");
	scanf("%80s", str);
	printf("Tvoje jmeno je %s\n", str);
	
	/*
	printf("Zadejte 3 cisla: ");
	scanf("%d   %d %d", &cislo1, &cislo2, &cislo3);
	*/
	
	return 0;
}