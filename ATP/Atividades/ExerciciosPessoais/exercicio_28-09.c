#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10

main(){
	int i, cont;
	for (i=0;i<(MAX/2);i++){
		printf("%d, %d, ",i+1, MAX-i);
	}
}
