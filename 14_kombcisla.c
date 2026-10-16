#include <stdio.h>

// vypocet faktorialu
long long int faktorial(long long int a){
	long long int vysledek = 1;
	for(int i = 1; i<=a; i++){
		vysledek *= i;	
	}
	return vysledek;
}

// vypocet kombinacniho cisla
//  n nad k 
long long int kombCislo(long long int n, long long int k){
	long long int vysledek;
	vysledek = 
		(faktorial(n))/
		(faktorial(n-k)*faktorial(k));
	return vysledek;
}


int main(){
	
	
	long long int n, k;
	printf("Prosim zadejte n a k: ");
	scanf("%lld %lld", &n, &k);
	while(getchar()!='\n');
	printf("Faktorial z n: %lld\n", faktorial(n));
	printf("Faktorial z k: %lld\n", faktorial(k));
	
	long long int vysledek = kombCislo(n, k);
	printf("%lld", vysledek);

	return 0;
}





