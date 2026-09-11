
#include <stdio.h>

int main(){
	int teplota;
	teplota = 25;
	int * adr_teplota = & teplota;
	
	
	printf("Teplota: %d\n", teplota);
	printf("Teplota: %p\n", & teplota);
	printf("Teplota: %p\n", & adr_teplota);
	printf("Teplota: %p\n", adr_teplota);
	
	printf("Hodnota teploty z adresy: %d\n", *adr_teplota);

	// resetovani ukazatele
	adr_teplota = NULL;
	printf("Teplota: %p\n", adr_teplota);
	
	//teplota = 090;
	printf("Teplota: %d\n", teplota);
	printf("Teplota: %X\n", teplota);
	
	int a;
	short b;
	long c;
	
	printf("Velikost int %zu\n", sizeof(a));
	printf("Velikost int* %zu\n", sizeof(adr_teplota));
	printf("Velikost short %zu\n", sizeof(b));
	printf("Velikost long %zu\n", sizeof(c));
	
	char apostrof = '\'';
	char novyradek = '\n';
	printf("Apostrof: %c%c", apostrof, novyradek);
	
	float pi = 3.1415926535;
	printf("Pi: %.15f\n", pi);
	
	double cislo1 = 5e3;
	double cislo2 = 3.151692;
	long double cislo3 = 5e10L;
	
	printf("Double cislo1: %.0e, %.0f\n", cislo1, cislo1);
	printf("Double cislo2: %e, %f\n", cislo2, cislo2);
	printf("Long double: %.0Lf\n", cislo3 );
	
	long long int y = 3726800000000;
	long long int income = 20810888666698;
	double income2 = 20810888666698;
	printf("Dluh: %lld\n", y );
	printf("Prijem: %lld\n", income);
	printf("Prijem2: %7.0lf\n", income2);
	
	
	// pretypovani
	unsigned int k1 = 3254927976;
	int k2 = (int) k1;
	printf("K1 hex: %X\n", k1);
	printf("K2 hex: %X\n", k2);
	printf("K2: %d\n", k2);
	
	
	return 0;
}