#include <stdio.h>
#define arraysize(x) sizeof(x)/sizeof(x[0])

void vypis2DPole(int ** pole, int pRadku, int pSloupcu ){
	for(int r = 0; r < pRadku; r++){
		for(int s = 0; s < pSloupcu; s++){
			printf("%2d | ", pole[r][s]);
		}
		printf("\n");
	}
}

int main(){
	
	// inicializace 1
	int r1[4] = {1,2,3,4};
	int r2[4] = {5,6,7,8};
	int r3[4] = {9,10,11,12};
	int * pole2d[3] = {r1, r2, r3};
	
	// inicializace 2
	/*
	int pole2d[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	*/
	
	vypis2DPole(pole2d, 3, 4); // vypis

	return 0;
}





