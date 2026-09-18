
#include <stdio.h>

int main(){
	
	int prumer;
	/*int cislo1, cislo2, cislo3;*/
	
	char str[80];
	int datum;
	printf("Zadej svoje datum narozeni a jmeno: ");
	int kontrola = scanf("%d %80s", &datum, str);
	if(kontrola != 2){
		printf("Chyba!\n");
		while(getchar() != '\n');
	} else {
		printf("Tvoje datum a jmeno je %d %s\n", 
			datum, str);
	}
	printf("Kontrola: %d\n", kontrola);
	

	printf("Zadej prumer: ");
	scanf("%d", &prumer);
	while(getchar() != '\n');
	printf("Zadany prumer je %d\n", prumer); 
	
	
	int denVTydnu = 5;
	//printf("%zu\n", &denVTydnu);
	printf("%p\n", &denVTydnu);
	//printf("%x\n", &denVTydnu);

	char dlouheJmeno[100];
	printf("Zadej dlouhe jmeno: ");
	fgets(dlouheJmeno, 99, stdin);
	printf("Vase jmeno: %s", dlouheJmeno);
	
	/*
	printf("Zadejte 3 cisla: ");
	scanf("%d   %d %d", &cislo1, &cislo2, &cislo3);
	*/
	
	return 0;
}