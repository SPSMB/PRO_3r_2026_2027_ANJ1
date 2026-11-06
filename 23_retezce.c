#include <stdio.h>


int main(){
	
	const char * r1 = "Stredni prumyslova skola";
	printf("%s\n", r1);
	printf("Velikost: %lld\n", sizeof(r1));
	printf("Adresa: %x\n", (unsigned int)r1);
	
	printf(">%c<\n", r1[24]);
	
	r1 = "3215654";
	printf("Adresa: %x\n", (unsigned int)r1);
	printf("%s\n", r1);

	return 0;
}





