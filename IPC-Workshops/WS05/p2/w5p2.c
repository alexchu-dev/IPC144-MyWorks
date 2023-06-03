/*
*****************************************************************************
                          Workshop - #5 (P2)
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
#define LOG_DAYS 3
#define MIN_YEAR 2012
#define MAX_YEAR 2022

int main(void)
{
    const int JAN = 1, DEC = 12;
    int year, month, day;
    int flag = 1;
    int ratingFlat = 1;
    float morningRating, eveningRating;
    float sumMorningRating = 0;
    float sumEveningRating = 0;
    printf("General Well-being Log\n======================\n");
    do {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);

        if (year < MIN_YEAR || year > MAX_YEAR) {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
            if (month < JAN || month > DEC)
                printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }
        else if (year >= MIN_YEAR && year <= MAX_YEAR) {
            if (month < JAN || month > DEC)
                printf("   ERROR: Jan.(1) - Dec.(12)\n");
            else if (month >= JAN && month <= DEC)
                flag = 0;
        }
    } while (flag == 1);

    printf("\n*** Log date set! ***\n");
    
    for (day = 1; day <= LOG_DAYS; day++)
    {   
        printf("\n%d-",year);
        switch (month)
        {
        case 1:
            printf("JAN");
            break;
        case 2:
            printf("FEB");
            break;
        case 3:
            printf("MAR");
            break;
        case 4:
            printf("APR");
            break;
        case 5:
            printf("MAY");
            break;
        case 6:
            printf("JUN");
            break;
        case 7:
            printf("JUL");
            break;
        case 8:
            printf("AUG");
            break;
        case 9:
            printf("SEP");
            break;
        case 10:
            printf("OCT");
            break;
        case 11:
            printf("NOV");
            break;
        case 12:
            printf("DEC");
            break;
        }
        if (day < 10)
            printf("-0%d\n", day);
        else
            printf("-%d\n", day);

        do {
            printf("   Morning rating (0.0-5.0): ");
            scanf("%f", &morningRating);
            if (morningRating < 0 || morningRating > 5)
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            else
                ratingFlat = 0;
        } while (ratingFlat == 1);
        sumMorningRating = sumMorningRating + morningRating;
        ratingFlat = 1;

        do {
            printf("   Evening rating (0.0-5.0): ");
            scanf("%f", &eveningRating);
            if (eveningRating < 0 || eveningRating > 5)
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            else
                ratingFlat = 0;
        } while (ratingFlat == 1);
        sumEveningRating = sumEveningRating + eveningRating;
        ratingFlat = 1;
    }
    printf("\nSummary\n=======\n");
    printf("Morning total rating: %6.3f\n", sumMorningRating);
    printf("Evening total rating: %6.3f\n", sumEveningRating);
    printf("----------------------------\n");
    printf("Overall total rating: %6.3f\n", sumMorningRating + sumEveningRating);
    printf("\nAverage morning rating: %4.1f\n",sumMorningRating/LOG_DAYS);
    printf("Average evening rating: %4.1f\n", sumEveningRating / LOG_DAYS);
    printf("----------------------------\n");
    printf("Average overall rating: %4.1f\n", (sumMorningRating + sumEveningRating)/(LOG_DAYS*2));
    printf("\n");
    return 0;
}