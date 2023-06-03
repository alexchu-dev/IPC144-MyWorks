/*
*****************************************************************************
                          Workshop - #3 (Part-2)
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
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

    char product1Type, product2Type, product3Type, product1Grind, product2Grind, product3Grind, product1Cream, product2Cream, product3Cream, coffeeStrength, withCream, makerType;
    int product1Weight, product2Weight, product3Weight, dailyServing;
    double product1Temp, product2Temp, product3Temp;

    // Note:
    // You can convert Celsius to Fahrenheit given the following formula:
    // fahrenheit = (celsius * 1.8) + 32.0);
    printf("Take a Break - Coffee Shop\n==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");

    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c",&product1Type);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &product1Grind);
    printf("Bag weight (g): ");
    scanf(" %d", &product1Weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &product1Cream);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &product1Temp);
    printf("\n");

    printf("COFFEE-2...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &product2Type);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &product2Grind);
    printf("Bag weight (g): ");
    scanf(" %d", &product2Weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &product2Cream);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &product2Temp);
    printf("\n");

    printf("COFFEE-3...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &product3Type);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &product3Grind);
    printf("Bag weight (g): ");
    scanf(" %d", &product3Weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &product3Cream);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &product3Temp);
    printf("\n");
    
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |    Coffee     |   Packaged    | Best  |   Serving\n");
    printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature\n");
    printf("   +---------------+---------------+---------------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf(" 1 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (product1Type == 'l') || (product1Type == 'L'), (product1Type == 'b') || (product1Type == 'B'), (product1Grind == 'c') || (product1Grind == 'C'), (product1Grind == 'f') || (product1Grind == 'F'), product1Weight, (product1Weight / GRAMS_IN_LBS), (product1Cream == 'Y') || (product1Cream == 'y'), product1Temp, (product1Temp * 1.8 + 32.0));
    printf(" 2 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (product2Type == 'l') || (product2Type == 'L'), (product2Type == 'b') || (product2Type == 'B'), (product2Grind == 'c') || (product2Grind == 'C'), (product2Grind == 'f') || (product2Grind == 'F'), product2Weight, (product2Weight / GRAMS_IN_LBS), (product2Cream == 'Y') || (product2Cream == 'y'), product2Temp, (product2Temp * 1.8 + 32.0));
    printf(" 3 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n\n", (product3Type == 'l') || (product3Type == 'L'), (product3Type == 'b') || (product3Type == 'B'), (product3Grind == 'c') || (product3Grind == 'C'), (product3Grind == 'f') || (product3Grind == 'F'), product3Weight, (product3Weight / GRAMS_IN_LBS), (product3Cream == 'Y') || (product3Cream == 'y'), product3Temp, (product3Temp * 1.8 + 32.0));
 

    //Mapping productNTypes to coffeeStrenth
    if (product1Type == 'l' || product1Type == 'L')
        product1Type = 'M';
    else
        product1Type = 'R';
    if (product2Type == 'l' || product2Type == 'L')
        product2Type = 'M';
    else
        product2Type = 'R';
    if (product3Type == 'l' || product3Type == 'L')
        product3Type = 'M';
    else
        product3Type = 'R';
    //Mapping productNGrind to makerType
    if (product1Grind == 'f' || product1Grind == 'F')
        product1Grind = 'C';
    else
        product1Grind = 'R';
    if (product2Grind == 'f' || product2Grind == 'F')
        product2Grind = 'C';
    else
        product2Grind = 'R';
    if (product3Grind == 'f' || product3Grind == 'F')
        product3Grind = 'C';
    else
        product3Grind = 'R';
    //Mapping productNCream to withCream
    if (product1Cream == 'y' || product1Cream == 'Y')
        product1Cream = 'Y';
    else
        product1Cream = 'N';
    if (product2Cream == 'y' || product2Cream == 'Y')
        product2Cream = 'Y';
    else
        product2Cream = 'N';
    if (product3Cream == 'y' || product3Cream == 'Y')
        product3Cream = 'Y';
    else
        product3Cream = 'N';
    //Mapping productNTemp to makerType
    if (product1Temp >=60 && product1Temp <=69.9)
        product1Temp = 'R';
    else
        product1Temp = 'C';
    if (product2Temp >= 60 && product2Temp <= 69.9)
        product2Temp = 'R';
    else
        product2Temp = 'C';
    if (product3Temp >= 60 && product3Temp <= 69.9)
        product3Temp = 'R';
    else
        product3Temp = 'C';


    printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");
    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &coffeeStrength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &withCream);
    printf("Typical number of daily servings: ");
    scanf("%d", &dailyServing);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &makerType);

    if (coffeeStrength == 'm' || coffeeStrength == 'M')
        coffeeStrength = 'M';
    else
        coffeeStrength = 'R';
    if (withCream == 'y' || withCream == 'Y')
        withCream = 'Y';
    else
        withCream = 'N';
    if (dailyServing >= 1 && dailyServing <= 4)
        dailyServing = 250;
    else if (dailyServing >= 5 && dailyServing <= 9)
        dailyServing = 500;
    else
        dailyServing = 1000;
    if (makerType == 'r' || makerType == 'R')
        makerType = 'R';
    else
        makerType = 'C';

    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n", (coffeeStrength == product1Type), (makerType == product1Grind), (dailyServing == product1Weight), (withCream == product1Cream), (makerType == product1Temp));
    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n", (coffeeStrength == product2Type), (makerType == product2Grind), (dailyServing == product2Weight), (withCream == product2Cream), (makerType == product2Temp));
    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n\n", (coffeeStrength == product3Type), (makerType == product3Grind), (dailyServing == product3Weight), (withCream == product3Cream), (makerType == product3Temp));
    
    //Repeat once again for 2nd input

    printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");
    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &coffeeStrength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &withCream);
    printf("Typical number of daily servings: ");
    scanf("%d", &dailyServing);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &makerType);

    if (coffeeStrength == 'm' || coffeeStrength == 'M')
        coffeeStrength = 'M';
    else if (!((coffeeStrength == 'm') || (coffeeStrength == 'M')))
        coffeeStrength = 'R';
    if (withCream == 'y' || withCream == 'Y')
        withCream = 'Y';
    else
        withCream = 'N';
    if (dailyServing >= 1 && dailyServing <= 4)
        dailyServing = 250;
    else if (dailyServing >= 5 && dailyServing <= 9)
        dailyServing = 500;
    else
        dailyServing = 1000;
    if (makerType == 'r' || makerType == 'R')
        makerType = 'R';
    else
        makerType = 'C';

    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n", (coffeeStrength == product1Type), (makerType == product1Grind), (dailyServing == product1Weight), (withCream == product1Cream), (makerType == product1Temp));
    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n", (coffeeStrength == product2Type), (makerType == product2Grind), (dailyServing == product2Weight), (withCream == product2Cream), (makerType == product2Temp));
    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n\n", (coffeeStrength == product3Type), (makerType == product3Grind), (dailyServing == product3Weight), (withCream == product3Cream), (makerType == product3Temp));
    printf("Hope you found a product that suits your likes!\n");
    return 0;
}
