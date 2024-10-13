#include <stdio.h>

int main(){
	float alas, tinggi, luas, keliling;
	
	// input panjang alas dan tinggi
	printf("Masukkan panjang alas tinggi (cm): ");
	scanf("%f", &alas);
	printf("Masukkan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	// Menghitung luas
	luas = 0,5 * alas * tinggi;
	
	// Menghitung keliling (asumsi segitiga sama kaki untuk kemudahan)
	float sisiMiring = ((alas / 2) * (alas / 2) + tinggi * tinggi);
	keliling = alas + 2 * sisiMiring;
	
	// Menampllkan hasil
	printf("Luas segitiga: %.2fn cm^2\n", luas);
	printf("Keliling seitiga: %.2f cm\n", keliling);
}
