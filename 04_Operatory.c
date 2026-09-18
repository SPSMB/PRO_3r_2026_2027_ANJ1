#include <stdio.h>

int main(){
	
	int i = 14;
	int j = 4;
	printf(" i:%3d,  j:%2d,   i%%j: %2d\n",      i,  j,   i%j);
	printf("-i:%3d, -j:%2d, -i%%-j: %2d\n",     -i, -j, -i%-j);
	printf(" i:%3d,  j:%2d,   i/j: %2d\n",       i,  j,   i/j);
	printf("-i:%3d, -j:%2d, -i/-j: %2d\n",      -i, -j, -i/-j);

	
	return 0;
}