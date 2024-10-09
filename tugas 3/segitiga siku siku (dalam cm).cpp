#include <stdio.h>
#include <math.h>

int main(){
	
float alas, tinggi, miring;

//Menginput sisi alas dan tinggi segitiga
printf("Masukkan sisi segitinga (dalam cm): ");
scanf("%f", &alas);

printf("Masukkan sisi tinggi segtiga (dalam cm): ");
scanf("%f", &tinggi);

//Menginput sisi miring menggunakan rumus Pythagoras
miring = sqrt((alas * alas) + (tinggi * tinggi));

//Menampilkan hasil
printf("Sisi miring segitiga tersubut adalah: %.2f cm\n", miring);

}
