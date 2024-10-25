#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int n;
	
	printf("Masukan N: ");
	scanf("%d",&n);
	
	if(n > 50){
		n = n - 25;
	} else {
		n = n + 10;
	}
	
	printf("Nilai N: %d\n",n);
}
