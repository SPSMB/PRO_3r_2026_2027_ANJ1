#include <stdio.h>

int nasob(int a, int b){
	printf("nasob: &a: %p\n", &a);
	printf("nasob: &b: %p\n", &b);
	return a*b;
}

void vypis(void){
	printf("Jsme uvnitr funkce vypis.\n");
}	

int main(){
	
	int a = 5;
	int b = 7;
	int c = 8;
	b = nasob(a,c);
	c = nasob(a,b);
	vypis();
	
	printf("main: &a: %p\n", &a);
	printf("main: &b: %p\n", &b);

	return 0;
}