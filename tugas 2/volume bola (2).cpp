#include<stdio.h>
#include<math.h>

int main()
{
	float diameter, jari_jari, volume;
	diameter = 15.0;
	
	jari_jari = diameter / 2.0;
	
	volume =  (4.0 / 3.0) * M_PI * pow(jari_jari, 3);
	
	printf("Diameter bola: %.2f cm\n", diameter);
	printf("Jari-jari bola: %.2f cm\n", jari_jari);
	printf("volume bola: %.2f cm^3\n", volume);
    return 0;
}
