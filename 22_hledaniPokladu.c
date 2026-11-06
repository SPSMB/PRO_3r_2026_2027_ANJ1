#include <stdio.h>
#define arraysize(x) sizeof(x)/sizeof(x[0])
#define ROWSIZE 4
#define COLSIZE 4

void vypis2DPole(char ** pole, int pRadku, int pSloupcu ){
	int s = 0;
	printf("  %d|%d|%d|%d \n", s, s+1, s+2, s+3);
    for(int r = 0; r < pRadku; r++){
    	printf("%d:", r);
		for(s = 0; s < pSloupcu; s++){
	 		printf("%c|", pole[r][s]);
	    }
	    printf("\n");
	}
}

int main(){
	
	int pokladX = 2; // souradnice pokladu - radek
	int pokladY = 2; // souradnice pokladu - sloupec
	int pokusy = 0;  // pocet pokusu, kolik uzivatel potrebuje
	
	// kodovani - kdyz tam uzivatel byl - 'X', jinak ' '
	
	// inicializace 1
	char r1[COLSIZE] = {' ',' ',' ',' '};
	char r2[COLSIZE] = {' ',' ',' ',' '};
	char r3[COLSIZE] = {' ',' ',' ',' '};
	char r4[COLSIZE] = {' ',' ',' ',' '};
	char * pole2d[ROWSIZE] = {r1, r2, r3, r4};
	
	int hadaX, hadaY;
	printf("Hadejte souradnice pokladu ve formatu x y: ");
	// +2 je konstanta na chyby - uzivatel muze zadat hodnotu mimo rozsha nebo znovu zadat uz tipovane policko
	while(pokusy < COLSIZE*ROWSIZE + 2){
		scanf("%d %d", &hadaX, &hadaY);
		pokusy++;
		if(hadaX > ROWSIZE-1 || hadaY > COLSIZE-1 ){
			printf("Mimo rozsah, max povolena hodnota je %d %d\n Zadejte znovu: ", ROWSIZE-1, COLSIZE-1 );
			continue;
		}
		
		if(pokladX == hadaX && pokladY == hadaY){
			printf("Uspech! Nasel jste poklad.\n");
			printf("Celkem jste potreboval %d pokusu.\n", pokusy);
			break;
		} else {
			pole2d[hadaX][hadaY] = 'X'; 
			vypis2DPole(pole2d, ROWSIZE , COLSIZE);
			printf("Smula, zkus znovu: ");
		}	
	}
	
	// vypis2DPole(pole2d, 3, 4); // vypis

	return 0;
}





