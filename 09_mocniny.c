#include <stdio.h>

int main(){
	
	// vypisuje mocniny 2 az dokud jsou mensi nez 1000
	for(int i=1; i<=1000; i=i*2){
		printf("%d ", i); 
	}
	printf("\n\n");
	
	for(int j = 1; j<100; j++){
		if(j%10 == 0){
			continue;
		}
		printf("%d\n", j);
	}

	return 0;
}