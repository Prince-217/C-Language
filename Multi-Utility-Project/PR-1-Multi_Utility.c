#include<stdio.h>

main()
{
	// Q1. Temperature Converter.
	
	float CELSIUS, FAHRENHIT;
	
	printf("----------------------------------------");
	printf("\n");
	printf("Enter Celsius Temperature :- ");
	scanf("%f",&CELSIUS);
	
	FAHRENHIT = (1.8 * CELSIUS) + 32;
	
	printf("\nYour Temperature in Fahrenhit is :- %f",FAHRENHIT);
	printf("\n");
	printf("----------------------------------------");
	printf("\n");	
}
