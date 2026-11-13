#include <stdio.h>
#include <string.h>

int main(){
	
	char r1[3000] = "Mam doma zeleny fikus.";
	char podretezec[15] = "zeleny";
	char nahrada[15] = "bil";
	
	int vel = strlen(nahrada);
	char * p = strstr(r1, podretezec);
	if(p == NULL){
		printf("Nenalezeno, konec.\n");
		return 1;
	}
	if(strlen(podretezec) == strlen(nahrada)){
		strncpy(p, nahrada, vel);
	} else if(strlen(podretezec) < strlen(nahrada)){
		char uloziste[20] = "";
		char * pozice = p + strlen(podretezec);
		int delka = r1 + strlen(r1) - pozice;
		strncpy(uloziste,pozice,delka);
		printf("Uloziste: >%s<\n", uloziste);
		strncpy(p, nahrada, strlen(nahrada));
		strncpy(p+strlen(nahrada), uloziste, strlen(uloziste));
	} else {
		printf("Podretezec ma jinou delku, nelze.\n");
	}
	
	
	printf("%s\n", r1);
	

	return 0;
}





