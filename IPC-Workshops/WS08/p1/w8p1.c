/*
*****************************************************************************
						  Workshop - #8 (P1)
Full Name  : Alex Chu
Student ID#: 153954219
Email      : kchu30@myseneca.ca
Section    : NJJ

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS


// System Libraries
#include <stdio.h>

// User Libraries
#include "w8p1.h"


// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int *xPtr)
{
	int x;
	int flag = 0;
	do {
		scanf("%d", &x);

		if (x <= 0)
		{
			printf("ERROR: Enter a positive value: ");
			flag = 1;
		}
		else
		{
			flag = 0;
			if (xPtr) *xPtr = x;
			xPtr = &x;
		}
	} while (flag != 0);
	return x;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double *yPtr)
{
	double y;
	int flag = 0;
	do {
		scanf("%lf", &y);
		if (y <= 0)
		{
			printf("ERROR: Enter a positive value: ");
			flag = 1;
		}
		else
		{
			flag = 0;
			if (yPtr) *yPtr = y;
			yPtr = &y;
		}
	} while (flag != 0);
	return y;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int noProd, const int gramServing)
{
	printf("Cat Food Cost Analysis\n");
	printf("======================\n\n");
	printf("Enter the details for %d dry food bags of product data for analysis.\n", noProd);
	printf("NOTE: A 'serving' is %dg\n", gramServing);
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int prod)
{
	struct CatFoodInfo product;
		printf("SKU           : ");
		getIntPositive(&product.sku);
		printf("PRICE         : $");
		getDoublePositive(&product.prodPrice);
		printf("WEIGHT (LBS)  : ");
		getDoublePositive(&product.prodWeight);
		printf("CALORIES/SERV.: ");
		getIntPositive(&product.calories);
		return product;
}


// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("\nSKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int id, const double price, const double weight, const int cal) {
	printf("%07d %10.2lf %10.1lf %8d\n", id, price, weight, cal);
}

// 7. Logic entry point
void start() {
	struct CatFoodInfo product2[MAX_PROD];
	openingMessage(MAX_PROD, GRAM_SERVING);
	int j;
	for (j = 0; j < MAX_PROD; j++)
	{
		printf("\nCat Food Product #%d\n", (j + 1));
		printf("--------------------\n");
		product2[j] = getCatFoodInfo(1);
	}
	displayCatFoodHeader();
	for (j = 0; j < MAX_PROD; j++)
	{
		displayCatFoodData(product2[j].sku, product2[j].prodPrice, product2[j].prodWeight, product2[j].calories);
	}
}