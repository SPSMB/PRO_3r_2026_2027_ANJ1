#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct datum {
	unsigned int den;
	unsigned int mesic;
	unsigned int rok;
} Datum;

void vypisDatum(Datum * d){
	printf("%u.%u.%u\n", d->den, d->mesic, d->rok);
}

// ulozi datum z konzole do promenne
void zadejDatum(Datum * d){
	printf("Zadej datum ve formatu den mesic rok oddeleno mezerami.\n");
	scanf("%u %u %u", &(d->den), &(d->mesic), &(d->rok));
}

// vraci ukazatel na Datum, ktery je pozdeji
// vraci NULL pokud jsou stejne
Datum * pozdejsiDatum(Datum * prvni, Datum * druhy){
	int d1 = prvni->rok * 10000 + 
			 prvni->mesic * 100 + prvni->den;
	int d2 = druhy->rok * 10000 +
			 druhy->mesic * 100 + druhy->den;
			 
	if(d1 > d2) { 
		return prvni;
	} else if (d1 < d2){ 
		return druhy;
	} else {
		return NULL;
	}
}

int main(){

	Datum d1 = {2026, 5, 5};
	Datum d2 = {2024, 9, 11};
	
	zadejDatum(&d1);
	zadejDatum(&d2);
	vypisDatum(&d1);
	vypisDatum(&d2);
	
	Datum * reseni = pozdejsiDatum(&d1, &d2);
	if(reseni != NULL){
		printf("Pozdejsi datum je "); vypisDatum(reseni);
	} else {
		printf("Datumy jsou stejne\n");
	}

	return 0;
}





