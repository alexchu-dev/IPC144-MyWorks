/*
*****************************************************************************
                          Workshop - #4 (Part-1)
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
    int num, i;
    char loopType;
    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");
    do {
        printf("\nD = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &num);    //Recieving a char and a num as input. Intended space to avoid the buffer holds the return/space from prev input
        i = num;  //Pre-assign counter i equals to num, so that it does not repeat assigning in the nest below.
        
        if (loopType != 'Q') {
            if ((loopType != 'D') && (loopType != 'W') && (loopType != 'F'))
            {
                printf("ERROR: Invalid entered value(s)!\n");
            }
            else if (num >= 3 && num <= 20)
            {
                if (loopType == 'D')
                {
                    printf("DO-WHILE: ");
                    do {
                        printf("D");
                        i--;
                    } while (i > 0);
                    printf("\n");
                }
                else if (loopType == 'W')
                {
                    printf("WHILE   : ");
                    while ( i > 0)
                    {
                        printf("W");
                        i--;
                    }
                    printf("\n");
                }
                else if (loopType == 'F')
                {
                    printf("FOR     : ");
                    for (; i > 0; i--)
                    {
                        printf("F");
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
        }
        else if (loopType == 'Q' && num != 0) {
            printf("ERROR: To quit, the number of iterations should be 0!\n");
        }
    } while (loopType != 'Q' || num != 0);
    printf("\n+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n\n");
    return 0;
}
