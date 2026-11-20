#include <stdio.h>
#include <string.h>

typedef struct dodavka{
	char SPZ[8];
	float kapacita;
	float dojezd;
	unsigned int rok;
	char jmeno[50];
} Dodavka;

void vypis_dodavku(Dodavka * d){
	printf("SPZ: %.3s", d->SPZ); // prvni polovina SPZ
	printf(" %s\n", d->SPZ + 3); // pak zbytek SPZ
	
	
	printf("kapacita: %.1f m3\n", d->kapacita);
	printf("dojezd: %.0f km\n", d->dojezd);
	printf("rok vyroby: %d\n", d->rok);
	printf("jmeno ridice: %s\n\n", d->jmeno);
}

void naplnFlotilu(Dodavka flotila[]){

	strncpy(flotila[0].SPZ, "1234AH3", 8);
	flotila[0].kapacita = 10.5;	
	flotila[0].dojezd = 700;	
	flotila[0].rok = 2001;	
	strncpy(flotila[0].jmeno, "Jarmil", 8);	
	
	strncpy(flotila[1].SPZ, "4561125", 8);
	flotila[1].kapacita = 9;	
	flotila[1].dojezd = 550;	
	flotila[1].rok = 2021;	
	strncpy(flotila[1].jmeno, "Tomas", 8);
	
	strncpy(flotila[2].SPZ, "6A41125", 8);
	flotila[2].kapacita = 15.1;	
	flotila[2].dojezd = 750;	
	flotila[2].rok = 2018;	
	strncpy(flotila[2].jmeno, "Jindra", 8);
	
}

int main(){
	Dodavka flotila[5];
	
	naplnFlotilu(flotila);
	vypis_dodavku(&flotila[0]);
	
	return 0;
}





