#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	char s1[100];
	printf("Zadejte retezec, misto mezer pouzijte *:\n");
	
	fgets(s1, sizeof(s1)-1, stdin);
	s1[sizeof(s1)] = '\0';
	
	for(int i = 0; s1[i] != '\0'; i++){
		if(s1[i] == '*'){
			s1[i] = '\n';
		}
	}

	printf("%s", s1);

	return 0;
}





