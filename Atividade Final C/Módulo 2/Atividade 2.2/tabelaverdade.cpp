#include <stdio.h>

int main(){
	
	int a = 1, b = 0, c = 1;
	
	printf("%d\n", a && b);
	printf("%d\n", a || b);
	printf("%d\n", !a);
	printf("%d\n", (a && c) || b);
	
	
	
	return 0;
}