#include <stdio.h>



int main(){
	
	int p[10];
	p[2] = 105;
	
	printf("Adresa, kde zacina pole: %p\n", p);
	printf("Adresa, kde zacina pole: %p\n", &(p[0]));
	printf("2. prvek: %d\n", p[2]);
	printf("2. prvek: %d\n", *(p+2));
	printf("Velikost pole je %d B\n", (int)sizeof(p));

	return 0;
}





