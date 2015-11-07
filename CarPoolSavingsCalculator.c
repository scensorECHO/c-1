/*	Programmer Name: Tom Carrio
	Program Purpose: To receive input from the user/s in order to 
	calculate the cost savings of carpooling. 
*/

#include <stdio.h>

int main(void)
{
	/* setup variables for output to user*/
	double miles;
	double totalMiles;
	double pricePerGallon;
	double milesPerGallon;
	double dailyParkingFees;
	double dailyTolls;

	char[] decPrompt = "\nEnter a decimal: ";

	printf("How many miles do you travel to work?%s",decPrompt);
	scanf("%d",&miles);
	totalMiles = miles * 2;
	printf("\nHow much does gas cost per gallon?%s",decPrompt);
	scanf("%d",&pricePerGallon);
	printf("\nWhat is your cars gas mileage? (As miles per gallon),%s",decPrompt);
	scanf("%d",&milesPerGallon);
	printf("\nAre there any parking fees?%s",decPrompt);
	scanf("%d",&dailyParkingFees);
	printf("\nAre there any tolls?%s",decPrompt);
	scanf("%d",&dailyTolls);





}