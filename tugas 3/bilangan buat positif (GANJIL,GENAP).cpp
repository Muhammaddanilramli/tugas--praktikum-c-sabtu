#include <stdio.h>

int main(){
	int bilangan;
	
	//Menginput nilai bilangan buat positif 
	printf("Masukkan bilangan bulat postif: ");
	scanf("%d", &bilangan);
	
	//Memeriksa apakah bilangan valid
	if (bilangan < 0){
		printf("Silahkan masukakan bilangan biulat positif.\n");
		return 1; // Keluar dari program jika bilangan tidak positif
	}
	
	// Mengecek apakah bilangan tersubut ganjil atau genap
	if(bilangan % 2 == 0){
		printf("GENAP\n");
	} else {
		printf("GANJIL\n");
	}
}
