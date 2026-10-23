#include <stdio.h>
#define arraysize(x) sizeof(x)/sizeof(x[0])


void vypisCetnosti(int cetnosti[], int velikost){
	/* vypis cetnosti */
	int s;
	for( s = 0; s < velikost; s++){
		if(cetnosti[s] > 0){
			printf("%d: %dx\n", s, cetnosti[s]);
		}
	}
}

void nacitejCetnosti(int cetnosti[], int velikost){
	printf("Zadavejte cisla od 1 do %d, oddelujte mezerami. Pro ukonceni zadejte 0.\n", velikost-1);
	
	int x = 1;
	while(1){
		scanf("%d", &x);
		if(x == 0 || x >= velikost){
			break;
		}
		cetnosti[x]++;
	}	
}

void inicializacePole(int pole[], int velikost, int pocatecniHodnota){
	int i;
	for(i = 0; i < velikost; i++){
		pole[i] = pocatecniHodnota;
	}
}

int main(){
	
	int vel = 101;
	int cetnosti[vel];
	inicializacePole(cetnosti, arraysize(cetnosti), 0);
	nacitejCetnosti(cetnosti, arraysize(cetnosti));
	vypisCetnosti(cetnosti, arraysize(cetnosti));

	return 0;
}





