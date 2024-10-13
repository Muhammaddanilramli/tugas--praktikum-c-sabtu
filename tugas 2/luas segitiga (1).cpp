#include <stdio.h>

int main(){
	// Deklarasi variabel
	float alas = 8.0; // panjang alas segitiga
	float tinggi = 5.0; // tinggi segitiga
	float luas ; // Variabel untuk menyimpan luas segitiga
	
	// Menghitung luas segitiga
	luas = 0.5 * alas * tinggi;
	
	// Menampilkan hasil 
	printf("Luas segitiga dengan alas %.2f dan tinggi %.2f adalah: %.2f", alas, tinggi, luas);
	
}
