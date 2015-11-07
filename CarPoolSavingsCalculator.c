/*	Programmer Name: Tom Carrio
	Program Purpose: To receive input from the user/s in order to 
	calculate the cost savings of carpooling. 
*/

#include <stdio.h>

int main(void)
{
	/* setup variables for output to user*/
	double dailyMiles;
	double pricePerGallon;
	double milesPerGallon;
	double dailyParkingFees;
	double dailyTolls;
	double totalCost;
	
	printf("How many miles do you travel per day?\nEnter a decimal: ");
	scanf("%lf",&dailyMiles);
	printf("\nHow much does gas cost per gallon?\nEnter a decimal: ");
	scanf("%lf",&pricePerGallon);
	printf("\nWhat is your cars gas mileage? (As miles per gallon)\nEnter a decimal: ");
	scanf("%lf",&milesPerGallon);
	printf("\nAre there any parking fees?\nEnter a decimal: ");
	scanf("%lf",&dailyParkingFees);
	printf("\nAre there any tolls?\nEnter a decimal: ");
	scanf("%lf",&dailyTolls);

	totalCost = (dailyMiles/milesPerGallon)*pricePerGallon + dailyParkingFees + dailyTolls;

	printf("\nTotal miles driven per day: %.2f",dailyMiles);
	printf("\nCost per gallon of gasoline: %.2f",pricePerGallon);
	printf("\nAverage miles per gallon: %.2f",milesPerGallon);
	printf("\nParking fees per day: %.2f",dailyParkingFees);
	printf("\nTolls per day: %.2f",dailyTolls);

	printf("\nTotal cost of commute per day: %.2f\n",totalCost);

}