#include <stdio.h>
#include <string.h>

int main(){
	
	char a[50] = "Stredni prumyslova skola";
	int pos;
	
	printf("Retezec: %s\n", a);
	do {
		printf("Zadejte pozici: ");
		int kontrola = scanf("%d", &pos);
		if(pos < 0 || pos >= strlen(a) || kontrola != 1){
			printf("Chyba! ");
			while(getchar() != '\n');
		}
		
	} while (pos < 0 || pos >= strlen(a));
	
	printf("Na pozici %d je znak %c.\n", pos, a[pos]);

	return 0;
}





