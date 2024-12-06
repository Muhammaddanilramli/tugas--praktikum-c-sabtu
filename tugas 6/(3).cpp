#include <stdio.h>
#include <math.h>

int main() {
	float alas, tinggi, miring;
	
	
	printf("Masukkan panjang alas segitiga: ");
	scanf("%f" , &alas);
	
	printf("Masukkan panjang alas segitiga: ");
	scanf("f" ,&tinggi);
	
	miring = sqrt(pow(alas, 2) + pow(tinggi, 2));
	
	
	printf("Panjang sisi miring segitiga adalah: %2.f cmn", miring);
	
	return 0;
}
