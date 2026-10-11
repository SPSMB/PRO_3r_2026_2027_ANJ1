#include <stdio.h>
#include <math.h>

int main(){
	
	int c;
	int kontrola;
	do {
		printf("Zadejte prosim cislo, ktere se bude testovat: ");
		kontrola = scanf("%d", &c);
		while (getchar()!='\n');
	}while(kontrola != 1);
	
	int odmocnina = sqrt(c);
	int nalezeno = 0;
	for(int i = 2; i <= odmocnina; i++){
		if(c%i == 0){
			printf("Cislo %d neni prvocislo, nasel se delitel %d.\n", c, i);
			nalezeno = 1;
			break;
		} 
	}
	if(nalezeno == 0){
		printf("Cislo %d je prvocislo.\n", c);
	}

	return 0;
}