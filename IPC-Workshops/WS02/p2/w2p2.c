/*
*****************************************************************************
						  Workshop - #2 (P2)
Full Name : Alex Chu
Student ID#: 153954219
Email : kchu30@myseneca.ca
Section : NJJ

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	const double TAX = 0.13;
	const char patSize = 'S', salSize = 'M', tomSize = 'L';

	/************** Initialise variables    *****************/

	double smallShirtTemp, mediumShirtTemp, largeShirtTemp;     //define temp var to store double input
	int patQuantity, salQuantity, tomQuantity, patTaxes, salTaxes, tomTaxes, patSubtotal, salSubtotal, tomSubtotal, patTotal, salTotal, tomTotal;   //define int var

/************** Read User's Input   *****************/

	printf("Set Shirt Prices\n");
	printf("================\n");
	printf("Enter the price for a SMALL shirt: $");
	scanf("%lf", &smallShirtTemp);
	printf("Enter the price for a MEDIUM shirt: $");
	scanf("%lf", &mediumShirtTemp);
	printf("Enter the price for a LARGE shirt: $");
	scanf("%lf", &largeShirtTemp);
	int smallShirtPrice = (int)(smallShirtTemp * 100), mediumShirtPrice = (int)(mediumShirtTemp * 100), largeShirtPrice = (int)(largeShirtTemp * 100); //define int value from temp double input

/************** Show Price list  *****************/

	printf("\nShirt Store Price List\n");
	printf("======================\n");
	printf("SMALL  : $%0.2lf\n", (double)smallShirtPrice / 100);   //list price from a int to double with two decimals
	printf("MEDIUM : $%0.2lf\n", (double)mediumShirtPrice / 100); //list price from a int to double with two decimals
	printf("LARGE  : $%0.2lf\n\n", (double)largeShirtPrice / 100); //list price from a int to double with two decimals

/************** Customer Orders  *****************/

	printf("Patty's shirt size is '%c'\n", patSize);    //preset size
	printf("Number of shirts Patty is buying: ");
	scanf("%d", &patQuantity);                        //Read user's input

	printf("\nTommy's shirt size is '%c'\n", tomSize);
	printf("Number of shirts Tommy is buying: ");
	scanf("%d", &tomQuantity);

	printf("\nSally's shirt size is '%c'\n", salSize);
	printf("Number of shirts Sally is buying: ");
	scanf("%d", &salQuantity);
	printf("\n");
	/************** Cart Summary  *****************/

	patSubtotal = smallShirtPrice * patQuantity;     //define subtotal
	tomSubtotal = largeShirtPrice * tomQuantity;
	salSubtotal = mediumShirtPrice * salQuantity;

	patTaxes = (int)patSubtotal * TAX + 0.5;         //define actual taxes from the constant tax percentage
	tomTaxes = (int)tomSubtotal * TAX + 0.5;
	salTaxes = (int)salSubtotal * TAX + 0.5;

	patTotal = patSubtotal + patTaxes;               //define formula of total amount
	tomTotal = tomSubtotal + tomTaxes;
	salTotal = salSubtotal + salTaxes;

	printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
	printf("-------- ---- ----- --- --------- --------- ---------\n");
	printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, (double)smallShirtPrice / 100, patQuantity, (double)patSubtotal / 100, (double)patTaxes / 100, (double)patTotal / 100);
	printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, (double)mediumShirtPrice / 100, salQuantity, (double)salSubtotal / 100, (double)salTaxes / 100, (double)salTotal / 100);
	printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, (double)largeShirtPrice / 100, tomQuantity, (double)tomSubtotal / 100, (double)tomTaxes / 100, (double)tomTotal / 100);
	printf("-------- ---- ----- --- --------- --------- ---------\n");
	double groupSubtotal = (double)(patSubtotal + salSubtotal + tomSubtotal) / 100, groupTotal = (double)(patTotal + salTotal + tomTotal) / 100, groupTaxes = (double)(patTaxes + salTaxes + tomTaxes) / 100;
	printf("                        %9.4lf %9.4lf %9.4lf\n", groupSubtotal, groupTaxes, groupTotal);

	printf("\nDaily retail sales represented by coins\n");
	printf("=======================================\n\n");

	/************** Sales Excl Tax  *****************/

	printf("Sales EXCLUDING tax\n");
	printf("Coin     Qty   Balance\n");
	printf("-------- --- ---------\n");
	printf("%22.4lf\n", groupSubtotal);

	double newBalance = (double)((int)(groupSubtotal * 100) % ((int)(groupSubtotal / 2) * 100)) / 100;  //define new balance for remain values
	printf("Toonies  %3d %9.4lf\n", (int)groupSubtotal / 2, newBalance);

	int newQty = newBalance / 1;    //define quantity var for next coin
	newBalance = (double)((int)(newBalance * 100) % ((int)(newBalance / 1) * 100)) / 100;   //define new balance from last new balance
	printf("Loonies  %3d %9.4lf\n", (int)newQty, newBalance);

	newQty = newBalance / 0.25;
	newBalance = (double)((int)(newBalance * 100) % 25) / 100;
	printf("Quarters %3d %9.4lf\n", (int)newQty, newBalance);

	newQty = newBalance / 0.1;
	newBalance = (double)((int)(newBalance * 100) % 10) / 100;
	printf("Dimes    %3d %9.4lf\n", (int)newQty, newBalance);

	newQty = newBalance / 0.05;
	newBalance = (double)((int)(newBalance * 100) % 5) / 100;
	printf("Nickels  %3d %9.4lf\n", (int)newQty, newBalance);

	newQty = newBalance / 0.01;
	newBalance = (double)((int)(newBalance * 100) % 1) / 100;
	printf("Pennies  %3d %9.4lf\n\n", (int)newQty, newBalance);

	printf("Average cost/shirt: $%.4lf\n\n", groupSubtotal / (patQuantity + tomQuantity + salQuantity));

	/************** Sales Inc Tax  *****************/

	newQty = 0;
	printf("Sales INCLUDING tax\n");
	printf("Coin     Qty   Balance\n");
	printf("-------- --- ---------\n");
	printf("%22.4lf\n", groupTotal);

	newBalance = (double)((int)(groupTotal * 100) % ((int)(groupTotal / 2) * 100)) / 100;  //define new balance for remain values
	printf("Toonies  %3d %9.4lf\n", (int)groupTotal / 2, newBalance);

	newQty = newBalance / 1;    //define quantity var for next coin
	newBalance = (double)((int)(newBalance * 100) % ((int)(newBalance / 1) * 100)) / 100;   //define new balance from last new balance
	printf("Loonies  %3d %9.4lf\n", (int)newQty, newBalance);

	newQty = newBalance / 0.25;
	newBalance = newBalance - (newQty * 0.25);
	printf("Quarters %3d %9.4lf\n", (int)newQty, newBalance);

	newQty = newBalance / 0.1;
	newBalance = newBalance - (newQty * 0.1);
	printf("Dimes    %3d %9.4lf\n", (int)newQty, newBalance);

	newQty = newBalance / 0.05;
	newBalance = newBalance - (newQty * 0.05);
	printf("Nickels  %3d %9.4lf\n", (int)newQty, newBalance);

	printf("Pennies  %3.0lf %9.4lf\n\n", (newBalance / 0.01), (newBalance-newBalance));

	printf("Average cost/shirt: $%.4lf\n", groupTotal / (patQuantity + tomQuantity + salQuantity));



	return 0;
}