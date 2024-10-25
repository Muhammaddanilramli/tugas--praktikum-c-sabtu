#include <stdio.h>

int main(){
	
	int a;
	
	printf("menentukan nilai bilangan ganjil atau genap \n ");
	printf("=========================================== \n");
	printf("masukkan nilai bilangan = ");
	scanf("%d",&a);
	if (a % 2 == 0){
		printf("%d adalah bilangan genap. \n", a);
	} else {
		printf("%d adalah bilangan ganjil. \n", a);
	}
	
	
}
