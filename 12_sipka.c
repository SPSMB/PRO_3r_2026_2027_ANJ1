#include <stdio.h>

int main(){
	
	int r,s;
	printf("Zadej cislo: ");
	int cislo;
	scanf("%d", &cislo);
	
	for(r = 0; r < cislo/2 ; r++){
		for(s=0; s < r ; s++){
			printf(" ");
		}
		printf("%d\n", r);
	}
	
	for(r = cislo/2 ; r < cislo; r++){
		for(s=0 ; s < cislo - r - 1 ; s++){
			printf(" ");
		}
		printf("%d\n", r);
	}
	
	return 0;
}