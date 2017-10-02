#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("before\n");
	system("ls -lah\n");
	printf("after\n");
	return 0;
}
