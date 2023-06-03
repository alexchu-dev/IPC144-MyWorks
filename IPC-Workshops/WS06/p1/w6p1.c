/*
*****************************************************************************
                          Workshop - #6 (P1)
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
#include <stdio.h>
#define MAX 10

int main(void)
{
    const double minIncome = 500, maxIncome = 400000, minCost = 100;
    double myIncome;
    double cost[MAX];
    double sum = 0;
    int priority[MAX];
    char finance[MAX];
    int items, i, catchall;
    printf("+--------------------------+\n+   Wish List Forecaster   |\n+--------------------------+\n");
    do {
        printf("\nEnter your monthly NET income: $");
        scanf("%lf", &myIncome);
        if (myIncome < minIncome)
            printf("ERROR: You must have a consistent monthly income of at least $%.2f\n", minIncome);
        else if (myIncome > maxIncome)
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2f\n",maxIncome);
    } while (myIncome < minIncome || myIncome > maxIncome);
    do {
        printf("\nHow many wish list items do you want to forecast?: ");
        scanf("%d", &items);
        if (items < 1 || items > MAX) {
            printf("ERROR: List is restricted to between 1 and %d items.\n", MAX);
            while ((catchall = getchar()) != '\n' && catchall != EOF); /* Clean up the buffer */
    }
    } while (items < 1 || items > MAX);
    for (i = 0; i < items; i++)
    {
        printf("\nItem-%d Details:\n",i+1);
        do {
            printf("   Item cost: $");
            scanf("%lf", &cost[i]);
            if (cost[i] < minCost)
                printf("      ERROR: Cost must be at least $%.2lf\n", minCost);
        } while (cost[i] < minCost);
        do {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[i]);
            if (priority[i] < 1 || priority[i] > 3)
                printf("      ERROR: Value must be between 1 and 3\n");
        } while (priority[i] < 1 || priority[i] > 3);
        do {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &finance[i]);
            if (finance[i] !='y' && finance[i] != 'n')
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
        } while (finance[i] != 'y' && finance[i] != 'n');

    }
    printf("\nItem Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    for (i = 0; i < items; i++)
    {
        printf("%3d  %5d    %5c    %11.2lf\n", i+1, priority[i], finance[i], cost[i]);
        sum = sum + cost[i];
    }
    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n\n", sum);
    printf("Best of luck in all your future endeavours!\n");
    return 0;
}