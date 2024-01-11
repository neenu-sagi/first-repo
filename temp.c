#include <stdio.h>

int main(){
	float c;
	printf("Enter temp in Celsius\n");
	scanf("%f", &c);
	printf("Temp in Fahrenheit is %f and temp in Kelvin is %f\n",(c*9/5)+32, c+273.15);
	return 0;
}
