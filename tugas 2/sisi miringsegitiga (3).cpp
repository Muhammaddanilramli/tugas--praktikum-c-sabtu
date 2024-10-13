#include <stdio.h>
#include <math.h>

int main(){
	float alas = 4.0; 
	float tinggi = 5.0;
	float miring;
	
	miring = sqrt (pow(alas, 2) + pow(tinggi, 2));
	
	printf("Sisi mirng sgitiga siku -siku dengan alas %.2f cm dan tinggi %.2f cm adalah: %.2f cm\n", alas, tinggi, miring);
}
