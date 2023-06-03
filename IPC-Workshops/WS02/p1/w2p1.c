/*
*****************************************************************************
                          Workshop - #2 (P1)
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

#include <stdio.h>  // C language module providing Input/Output facilities
#include <math.h>
int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';

/************** Initialise variables    *****************/
  
    double smallShirtTemp, mediumShirtTemp, largeShirtTemp;     //define temp var to store double input
    int shirtQuantity, taxes, subtotal, total;                  //define integer var

/************** Read User's Input   *****************/

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &smallShirtTemp);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &mediumShirtTemp);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &largeShirtTemp);
    int smallShirt = (int)(smallShirtTemp * 100),mediumShirt = (int)(mediumShirtTemp * 100),largeShirt = (int)(largeShirtTemp * 100); //define int value from temp double input

/************** Show Price list  *****************/

    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%0.2lf\n", (double)smallShirt/100);   //list price from a int to double with two decimals
    printf("MEDIUM : $%0.2lf\n", (double)mediumShirt/100); //list price from a int to double with two decimals
    printf("LARGE  : $%0.2lf\n\n", (double)largeShirt/100); //list price from a int to double with two decimals

/************** Preset shirt size is Small  *****************/

    printf("Patty's shirt size is '%c'\n", patSize);    //preset as small
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &shirtQuantity);                        //Read user's input

/************** Cart Summary  *****************/

    printf("\nPatty's shopping cart...\n");
    printf("Contains : %d shirts\n",shirtQuantity);
    subtotal = smallShirt * shirtQuantity;              //define formula of subtotal
    printf("Sub-total: $%8.4lf\n", (double)subtotal/100 );
    taxes = (int)subtotal * TAX + 0.5;                      //define actual taxes from the constant tax percentage
    printf("Taxes    : $%8.4lf\n", (double)taxes / 100);
    total = subtotal + taxes;                           //define formula of total amount
    printf("Total    : $%8.4lf\n", (double)total / 100);
    return 0;
}