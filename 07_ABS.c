#include <stdio.h>

int main(){
	double a;
	int b = scanf("%lf", &a);
	if(b != 1){
		printf("ERROR: spatny vstup\n");
		while(getchar() != '\n');
		b = scanf("%le0", &a);
		if(b != 1){
			printf("blbecku");
			return 0;
		}
	}
			
	if (a <= 0){
		a *= -1;
	}
	int d = (int)a;
	// chytry vypis
	if(a > d){
		printf("Vystup: %.2f\n", a);
		printf("Vystup: %.8f\n", a);
	} else {
		printf("Vystup: %.0f\n", a);
	}

	return 0;
}