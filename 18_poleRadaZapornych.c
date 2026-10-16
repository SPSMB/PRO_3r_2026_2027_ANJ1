#include <stdio.h>
#define arraysize(x) sizeof(x)/sizeof(x[0])


int main(){
	int count = 0;
	int maxCount = 0;
	int newstartidx;
	int maxstartidx;

	int array[10];
	printf("Zadejte 10 cisel:\n");
	
	int i = 0;
	while(i<10){
		scanf("%d",&(array[i]));
		// scanf("%d",array+i);
		i++;
	}
	
	for (int i = 0; i < arraysize(array); i++){
		if(i == 0){
			if(array[i] < 0){
				newstartidx = i;
				count++;
			}
		} else {
			if(array[i] < 0){ // zaporne
				if(array[i-1] > 0){
					newstartidx = i;
				}
				count++;
			} else {	// kladne
				if(array[i-1] < 0){
					if(count > maxCount){
						maxCount = count;
						maxstartidx = newstartidx;
					}
					count = 0; // reset
				}
			}
		}
	}
	
	for (int i = maxstartidx; i < maxstartidx + maxCount; i++){
		printf("%d ", array[i]);
	}
	

	return 0;
}





