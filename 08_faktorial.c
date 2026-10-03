#include <stdio.h>

int main(){
	int faktorial;
	int i;
	int x = 1;
	printf("Zadejte faktorial:");
	scanf("%d" , &faktorial);
	i = faktorial;
	while(i >= 1){
		x = x*i;
		i--;
	}
	printf("Konecny soucet je %d" , x);
	return 0;
}