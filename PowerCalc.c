/* A program to perform calculations using exponents, using two functions.  The license here is the "free as a Byrd" license. */

#include<stdio.h>
#include<math.h>

	double square(double base){         /* A function to square a number */
		return base * base;
	}

	double power(double base, double exponent){  /* A function to compute the result of any power other than a square */
		return pow(base, exponent);
	}

int main(){

	float base, exponent;
	printf("Please enter the base for the calculation: \n");
	scanf("%f", &base);
	printf("Please enter the exponent for the calculation: \n");
	scanf("%f", &exponent);

	/*printf("The calculated value is: \n");
	printf("%f", power(base, exponent));
	*/

	if(exponent == 2){
		printf("The calculated squared value is: \n");
		printf("%f", square(base));
	}
	else{
		printf("The calculated value using the exponent is: \n");
		printf("%f", power(base, exponent));
	}


	/*printf("... and 2 raised to the power 3 is: \n");
	printf("%f", power(2.5, 3.2));
	*/

	return 0;
}
