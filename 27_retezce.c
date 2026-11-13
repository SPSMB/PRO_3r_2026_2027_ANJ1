#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char input[256];
	char digits[256];
	char others[256];
	
	int d_idx = 0; //index digits
	int o_idx = 0; //index of everything else
	
	printf("Enter some random symbols: ");
	fgets(input, sizeof(input), stdin);
	// jestli nevis co je fgets tak je to proste skill issue
	
	for (int i = 0; input[i] != '\0'; i++){
		if(input[i] == '\n')continue;
		if(isdigit(input[i])){
			digits[d_idx] = input[i];
			d_idx++;
		}else{
			others[o_idx] = input[i];
			o_idx++;
		}
		
	}
		digits[d_idx] = '\0';
		others[o_idx] = '\0';
		
		
		printf("Digits: %s\n", digits);
		printf("Everything else: %s\n", others);
	

	return 0;
}





