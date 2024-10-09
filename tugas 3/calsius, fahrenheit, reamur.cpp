#include <stdio.h>

int main(){
	float celsius, fahrenheit, reamur;
	
	// Menghitung nilai suhu dalam Calcius
	printf("Masukkan suhu dalam Calcius: ");
	scanf("%f", &celsius);
	
	// Menghitung suhu dalam Fahrenheit dan Reamur
	fahrenheit = (celsius * 9/5) + 32;
	reamur = celsius * 4/5;
	
	// Menampilkan hasil
	printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);
	printf("Suhu dalam Reamur: %.2f\n", reamur);
}
