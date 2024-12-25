#include <stdio.h>

int main() {
	int A[11];
	int i, j = 0;
	
	printf("Masukkan 11 angka:\n");
	for (i = 0; i < 11; i++) {
		scanf("%d", &A[i]);
		
		// Periksa bila angka genap
		if (A[i] % 2 == 0) {
			A[j] = A [i];
			j++;
		} else {
			
			// Jika bukan angka genap, abaikan
			A[i] = 0; // Opsional mengisi dengan 0 untuk indikasi
		}
	}
	
	printf("Angka genap yang tersempan:\n");
	for (i = 0; i < j; i++){
		printf("%d\t", A[i]);
	}
	
	return 0;
	
}
