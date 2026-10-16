#include <stdio.h>

int main(){
	
	for(int i = 0; i < 100; i--){
		if(i%500000 == 0){
			printf("%d\n", i);
		}
	}
	
	return 0;
}