#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct automobil {
	char znacka[50];
	unsigned int najeto;
	unsigned int vyroben;
	int vykon;
	char model[50];
	char palivo[50];
	char barva[50];
} Automobil;

typedef struct clovek {
	char jmeno[50];
	char prijmeni[50];
	unsigned int vaha;
	unsigned int vyska;
} Clovek;

void vypisCloveka(Clovek c){
	printf("-------------------------------\n");
	printf("Jmeno a prijmeni: %s %s\n", 
		c.jmeno, c.prijmeni);
	printf("Vaha: %d\n", c.vaha);
	printf("Vyska: %d\n", c.vyska);
	printf("-------------------------------\n");
}

void zmenVysku(Clovek * c, unsigned int novaVyska){
	(*c).vyska = novaVyska;
}

void zmenVahu(Clovek * c, unsigned int novaVaha){
	c->vaha = novaVaha;
}

int main(){
	
	struct clovek c1;
	strncpy(c1.jmeno, "Jaromir", 49);
	strncpy(c1.prijmeni, "Jagr", 49);
	c1.vaha = 80;
	c1.vyska = 180;
	
	printf("Adresa jmeno:    %p\n", &c1.jmeno);
	printf("Adresa prijmeni: %p\n", &c1.prijmeni);
	printf("Adresa vaha:     %p\n", &c1.vaha);
	printf("Adresa vyska:    %p\n", &c1.vyska);
	
	vypisCloveka(c1); // vypise cloveka
	zmenVahu(&c1, 75);
	zmenVysku(&c1, 175);
	vypisCloveka(c1);
	
	Automobil a1;
	strncpy(a1.znacka, "Skoda", 49);
	
	printf("Clovek c1: %d\n", c1.vaha);
	printf("Auto a1: %s\n", a1.znacka);

	return 0;
}





