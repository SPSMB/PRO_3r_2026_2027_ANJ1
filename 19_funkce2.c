#include <stdio.h>
#define arraysize(x) sizeof(x)/sizeof(x[0])


void deleni (int x, int y, int * zbytek, int * podil){

	*podil = x/y;
	*zbytek = x%y;
	
	printf("adr podil: %p\n", podil);
	printf("adr zbytek: %p\n", zbytek);

}

int main(){
	
	int zbytek, podil; // zbytek - adresa 10, podil - adresa 20
	printf("adr podil: %p\n", &podil);
	printf("adr zbytek: %p\n", &zbytek);
	
	
	deleni(17, 5, &zbytek, &podil);
	
	printf("Podil: %d\nZbytek: %d\n", 
		podil, zbytek);
		
	
	float array[110];
	printf("%d", sizeof(array));
	

	return 0;
}





