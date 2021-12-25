#include <stdio.h>
int main(){

/*	int fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	while(fahr <= upper){
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d\t %6d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;*/
	float fahr;
	for (fahr = 300; fahr >= 0 ; fahr -=20){
		printf("%3d \t %4.2f \n",(int)fahr,(5.0/9.0)*(fahr - 32));
	}
	return 0;
}
