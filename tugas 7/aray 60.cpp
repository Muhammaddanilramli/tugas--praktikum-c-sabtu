#include <stdio.h>

int main() {
	int nilai [10];
	
	printf("Masukkan 10 nilai mahasiswa:\n");
	for (int i = 0; i < 10; i++){
		scanf("%d", &nilai[i]);
	}
	
	printf("Nilai mahasiswa yang lulus (>=60):\n");
	for (int i = 0; i < 10; i++){
		if (nilai[i] >= 60) {
			printf("%d\t", nilai[i]);
	    }
	}
	
	return 0;
}
