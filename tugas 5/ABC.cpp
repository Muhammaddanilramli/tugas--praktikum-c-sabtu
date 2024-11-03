#include <stdio.h>

int main(){
	int kode;
	char jenis;
	float harga, diskon, harga_setelah_diskon;
	
	//Menerima input dari pengguna
	printf("Kode= ");
	scanf("%d", &kode);
	printf("Jenis= ");
	scanf(" %c", &jenis);
	printf("Harga= ");
	scanf("%f", &harga);
	
	//Menentukan diskon berdasarkam jenis menggunakan switch case
	switch (jenis){
		case 'A':
			diskon = 0.15;
			break;
		case 'B':
		    diskon = 0.15;
		    break;
		case 'C':
			diskon = 0.20;
			break;
			default:
				printf("Jenis tidak valid. Silahkan masukan jenis A, B, atau C.\n");
				return 1;	    
	}
	
	//Menghitung harga setelah di diskon 
	harga_setelah_diskon = harga - (harga * diskon);
	
	//Menampilkan hasil
	printf("Jenis barang %c  mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f%\n", jenis, diskon * 100, harga_setelah_diskon);
	return 0;
}
