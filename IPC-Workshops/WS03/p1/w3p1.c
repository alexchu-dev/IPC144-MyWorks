/*
*****************************************************************************
                          Workshop - #3 (Part-1)
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

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99, product1price = 111.49, product2price = 222.99, product3price = 334.49;
    const int product1ID = 111, product2ID = 222, product3ID = 111;
    const char product1Tax = 'Y', product2Tax= 'N', product3Tax = 'N';
    const double averagePrice = (product1price + product2price + product3price) / 3;

    printf("Product Information\n===================\n");
    printf("Product-1 (ID:%d)\n", product1ID);      //Show Product 1 ID
    printf("  Taxed: %c\n", product1Tax);           //Is the product taxed?
    printf("  Price: $%8.4lf\n\n",product1price);   //Show product price

    printf("Product-2 (ID:%d)\n", product2ID);      //Show Product 2 ID
    printf("  Taxed: %c\n", product2Tax);           //Is the product taxed?
    printf("  Price: $%8.4lf\n\n", product2price);   //Show product price

    printf("Product-3 (ID:%d)\n", product3ID);      //Show Product 3 ID
    printf("  Taxed: %c\n", product3Tax);           //Is the product taxed?
    printf("  Price: $%8.4lf\n\n", product3price);   //Show product price

    printf("The average of all prices is: $%8.4lf\n\n", averagePrice);  //print the average
    
    //Display text Relational and Logical Expressions
    printf("About Relational and Logical Expressions!\n========================================\n1. These expressions evaluate to TRUE or FALSE\n2. FALSE: is always represented by integer value 0\n3. TRUE : is represented by any integer value other than 0\n\n");

    printf("Some Data Analysis...\n=====================\n");
    printf("1. Is product 1 taxable\? -> %d\n\n",product1Tax=='Y');
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", (product2Tax != 'Y' && product3Tax != 'Y'));
    printf("3. Is product 3 less than testValue ($330.99)? -> %d\n\n", product3price < testValue);
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", product3price > product1price+product2price);
    printf("5. Is the price of product 1 equal to or more than the price difference\n   of product 3 LESS product 2? ->  %d (price difference: $%3.2lf)\n\n", product1price >= product3price - product2price, product3price - product2price);
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", product2price >= averagePrice);
    printf("7. Based on product ID, product 1 is unique -> %d\n\n", product1ID != product2ID && product1ID != product3ID);
    printf("8. Based on product ID, product 2 is unique -> %d\n\n", product2ID != product1ID && product2ID != product3ID);
    printf("9. Based on product ID, product 3 is unique -> %d\n\n", product3ID != product1ID && product3ID != product2ID);
    return 0;
}