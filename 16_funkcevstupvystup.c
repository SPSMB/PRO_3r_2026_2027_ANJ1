#include <stdio.h>

void nasob(int * a, int * b, int * vysledek){

	*vysledek = (*a) * (*b);

}

int main(){
	
	int a = 10;
	int b = 20;
	int vysledek;
	nasob(&a, &b, &vysledek);
	
	printf("Vysledek: %d\n", vysledek);

	return 0;
}





