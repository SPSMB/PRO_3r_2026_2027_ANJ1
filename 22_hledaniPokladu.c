#include <stdio.h>
#define arraysize(x) sizeof(x)/sizeof(x[0])

void vypis2DPole(char ** pole, int pRadku, int pSloupcu ){
	for(int r = 0; r < pRadku; r++){
		for(int s = 0; s < pSloupcu; s++){
			printf("%c | ", pole[r][s]);
		}
		printf("\n");
	}
}

int main(){
	
	int pokladR = 2; // souradnice pokladu - radek
	int pokladS = 2; // souradnice pokladu - sloupec
	int pokusy = 0;  // pocet pokusu, kolik uzivatel potrebuje
	
	// kodovani - kdyz tam uzivatel byl - 'X', jinak ' '
	
	// inicializace 1
	char r1[4] = {' ',' ',' ',' '};
	char r2[4] = {' ',' ',' ',' '};
	char r3[4] = {' ',' ',' ',' '};
	char * pole2d[3] = {r1, r2, r3};
	
	printf("Hadejte souradnice pokladu ve formatu x y:\n");
	while(pokusy < 4*4){
		
	}
	
	// vypis2DPole(pole2d, 3, 4); // vypis

	return 0;
}





