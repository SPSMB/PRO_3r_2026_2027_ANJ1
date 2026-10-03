#include <stdio.h>

int main(){
	
	int a = 0b1010; // 0010 1000
	int b = 0b0110; // 0000 0011
	
	printf("a dec: %d\n", a);
	printf("a hex: %x\n", a);
	printf("a bin: %B\n", a);
	printf("a neg: %d\n", ~a);
	printf("b: %d\n", b);
	printf("a xor b: %d\n", a^b);
	printf("a << 2: %d\n", a << 2);
	printf("a << 2: %d\n", a << 28);
	printf("b >> 6: %d\n", b >> 1);
	printf("5 & 4: %d\n", 5 & 4);
	printf("1 & 2: %d\n", 1 & 2);
	printf("a+++b: %d\n", a+++b );
	
	int x = 1; // 0001
	int y = 2; // 0010
	printf("x&y: %d\n", x&y);
	printf("x&&y: %d\n", x&&y);
	
	return 0;
}