#include <stdio.h>
#include <string.h>

int main(){
	
	char a[50] = "Stredni prumyslova skola";
	char b[50] = "Stredni prumyslova skola";
	// porovnání řetězců
	int vysl = strcmp(a, b);
	printf("Vysledek: %d\n", vysl);
	if(vysl == 0){
		printf("A a B jsou stejne\n");
	}
	printf("%s\n", a);
	
	// Velikost retezce
	printf("Sizeof: %lld\n", sizeof(a));
	printf("Strlen: %lld\n", strlen(a));
	
	
	// Spojeni vice retezcu - strcat
	strcat(a, b);
	printf("STRCAT: a: %s\n", a);
	
	// Vyhledani podretezce - strstr
	char podretezec[10] = "skola";
	char * uk;
	uk = strstr(a, podretezec);
	printf("Adresa a              : %p\n", a);
	printf("Ukazatel na podretezec: %p\n", uk);
	printf("Pozice podretezce v retezci a: %lld\n", uk - a);
	
	// int i = 0;
	// char b; b = *(a+i);
	
	/*
	while(b != '\0'){
		printf("%c\n", b);
		i++;
		b = *(a+i);
	}
	*/
	
	char c[50] = "";
	char d[50];
	strncpy(c, "AHOJ", 5);
	strncpy(d, c, 5);
	printf("%s\n", c);
	printf("%s\n", d);

	return 0;
}





