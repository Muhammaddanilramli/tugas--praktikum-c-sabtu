#include <stdio.h>
#include <math.h>

int main(){
	// Deklarasi variabel
	float saldoAwal = 1000000; // Saldo awal dalam rupiah
	float bunga = 0.02; //Bunga perbulan dalam bentuk desimal
	int bulan = 10; // jumlah bulan
	float saldoAkhir;
	
	//Menghitung saldo akhir menggunakan rumus majemuk
	saldoAkhir = saldoAwal * pow(1 + bunga, bulan);
	
	// Menampilkan hasil
	printf("Saldo setelah %d bulan adalah Rp %.2f\n", bulan, saldoAkhir);
	
	return 0;
	}
