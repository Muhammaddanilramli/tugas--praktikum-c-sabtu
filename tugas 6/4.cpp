#include <stdio.h>

int main(){
	
	// Deklarasi variabel
	int kecepatan = 2; // m/s
	int waktu = 100; // detik
	int jarak;
	
	// Menghitung jarak
	jarak = kecepatan * waktu;
	
	//Menanpilkan hasil
	printf("jarak yang ditempuh adalah : %d meter\n", jarak);
	
	return 0;
}
