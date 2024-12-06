#include <stdio.h>
#define PI 3.14159

int main() {
	float diameter, jarijari, volume;
	
	
	diameter = 15;
	
	
	jarijari = diameter / 2;
	
	
	volume = (4.0 / 3.0) * PI * jarijari * jarijari *jarijari;
	
	
	printf("Diameter bola: %2.f cm\n", diameter);
	printf("Volume bola: %2.f cm\n", volume);
	
	return 0;
}
