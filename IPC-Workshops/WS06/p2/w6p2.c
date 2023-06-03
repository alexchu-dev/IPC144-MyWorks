/*
*****************************************************************************
                          Workshop - #6 (P2)
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
    double sum = 0, sumPriority1 = 0, sumPriority2 = 0, sumPriority3 = 0;
    double cost[MAX];
    int priority[MAX];
    char finance[MAX];
    int financeFlag[MAX] = { 0 };
    int items, i, selection, priorityFilter;
    int escFlag = 0, p1FinanceFlag = 0, p2FinanceFlag = 0, p3FinanceFlag = 0;
    printf("+--------------------------+\n+   Wish List Forecaster   |\n+--------------------------+\n");
    do {
        printf("\nEnter your monthly NET income: $");
        scanf("%lf", &myIncome);
        if (myIncome < minIncome)
            printf("ERROR: You must have a consistent monthly income of at least $%.2f\n", minIncome);
        else if (myIncome > maxIncome)
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2f\n", maxIncome);
    } while (myIncome < minIncome || myIncome > maxIncome);
    do {
        printf("\nHow many wish list items do you want to forecast?: ");
        scanf("%d", &items);
        if (items < 1 || items > MAX)
            printf("ERROR: List is restricted to between 1 and %d items.\n", MAX);
    } while (items < 1 || items > MAX);
    for (i = 0; i < items; i++)
    {
        printf("\nItem-%d Details:\n", i+1);
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
            if (finance[i] != 'y' && finance[i] != 'n')
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            else if (finance[i] == 'y')
                financeFlag[i] = 1;

        } while (finance[i] != 'y' && finance[i] != 'n');

    }
    printf("\nItem Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    for (i = 0; i < items; i++)
    {
        printf("%3d  %5d    %5c    %11.2lf\n", i+1, priority[i], finance[i], cost[i]);
        sum = sum + cost[i];
        if (priority[i] == 1) {
            sumPriority1 = sumPriority1 + cost[i];
            if (financeFlag[i] == 1)
                p1FinanceFlag = 1;
        }
        if (priority[i] == 2) {
            sumPriority2 = sumPriority2 + cost[i];
            if (financeFlag[i] == 1)
                p2FinanceFlag = 1;
        }
        if (priority[i] == 3) {
            sumPriority3 = sumPriority3 + cost[i];
            if (financeFlag[i] == 1)
                p3FinanceFlag = 1;
        }
    }
    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n", sum);
    
    do {
        printf("\nHow do you want to forecast your wish list?\n");
        printf(" 1. All items (no filter)\n");
        printf(" 2. By priority\n");
        printf(" 0. Quit/Exit\n");
        printf("Selection: ");
        scanf("%d", &selection);
        if (selection == 1) {
            printf("\n====================================================\n");
            printf("Filter:   All items\n");
            printf("Amount:   $%1.2lf\n",sum);
            printf("Forecast: %d years, %d months\n", (int)(sum / (myIncome*12)), (int)((sum / myIncome)+1) % 12);
            if (p1FinanceFlag == 1 || p2FinanceFlag == 1 || p3FinanceFlag == 1) {
                printf("NOTE: Financing options are available on some items.\n      You can likely reduce the estimated months.\n");
            }
            printf("====================================================\n");
        }
        else if (selection == 2) {
            printf("\nWhat priority do you want to filter by? [1-3]: ");
            scanf("%d", &priorityFilter);
            printf("\n====================================================\n");
            printf("Filter:   by priority (%d)\n", priorityFilter);
            if (priorityFilter == 1) {
                printf("Amount:   $%1.2lf\n", sumPriority1);
                printf("Forecast: %d years, %d months\n", (int)(sumPriority1 / (myIncome * 12)), (int)((sumPriority1 / myIncome) + 1) % 12);
                if (p1FinanceFlag == 1)
                    printf("NOTE: Financing options are available on some items.\n      You can likely reduce the estimated months.\n");
            }
            else if (priorityFilter == 2) {
                printf("Amount:   $%1.2lf\n", sumPriority2);
                printf("Forecast: %d years, %d months\n", (int)(sumPriority2 / (myIncome * 12)), (int)((sumPriority2 / myIncome) + 1) % 12);
                if (p2FinanceFlag == 1)
                    printf("NOTE: Financing options are available on some items.\n      You can likely reduce the estimated months.\n");
            }
            else if (priorityFilter == 3) {
                printf("Amount:   $%1.2lf\n", sumPriority3);
                printf("Forecast: %d years, %d months\n", (int)(sumPriority3 / (myIncome * 12)), (int)((sumPriority3 / myIncome) + 1) % 12);
                if (p3FinanceFlag == 1)
                    printf("NOTE: Financing options are available on some items.\n      You can likely reduce the estimated months.\n");
            }
            
            printf("====================================================\n");

        }
        else if (selection == 0) {
            escFlag = 1;
            printf("\nBest of luck in all your future endeavours!\n\n");
        }
        else
            printf("\nERROR: Invalid menu selection.\n");
    } while (escFlag != 1);
    return 0;
}