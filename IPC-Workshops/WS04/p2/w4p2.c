/*
*****************************************************************************
                          Workshop - #4 (Part-2)
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
    int appleNeeds, orangeNeeds, pearNeeds, tomatoNeeds, cabbageNeeds, applePicks, orangePicks, pearPicks, tomatoPicks, cabbagePicks, shopAgain;

    do {
        printf("Grocery Shopping\n================\n");
        //Ask for input for 5 fruits
        do {
            printf("How many APPLES do you need? : ");
            scanf("%d", &appleNeeds);
            if (appleNeeds < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (appleNeeds < 0);
        printf("\n");
        do {
            printf("How many ORANGES do you need? : ");
            scanf("%d", &orangeNeeds);
            if (orangeNeeds < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (orangeNeeds < 0);
        printf("\n");
        do {
            printf("How many PEARS do you need? : ");
            scanf("%d", &pearNeeds);
            if (pearNeeds < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (pearNeeds < 0);
        printf("\n");
        do {
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &tomatoNeeds);
            if (tomatoNeeds < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (tomatoNeeds < 0);
        printf("\n");
        do {
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &cabbageNeeds);
            if (cabbageNeeds < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (cabbageNeeds < 0);

        printf("\n--------------------------\nTime to pick the products!\n--------------------------\n\n");

        //Ask for Fruit Picking Inputs
        // 
        //Part: Apple - Ask for Pick quantity if Needs is not Zero.
        while (appleNeeds > 0) {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &applePicks);
            if (applePicks <= 0)
                printf("ERROR: You must pick at least 1!\n");
            else if (applePicks > appleNeeds)
                printf("You picked too many... only %d more APPLE(S) are needed.\n", appleNeeds);
            else if (applePicks < appleNeeds && applePicks > 0) {
                appleNeeds = appleNeeds - applePicks;
                printf("Looks like we still need some APPLES...\n");
            }
            else if (applePicks == appleNeeds) {
                appleNeeds = appleNeeds - applePicks;
                printf("Great, that's the apples done!\n\n");
            }
        }
        //Part: Orange - Ask for Pick quantity if Needs is not Zero.
        while (orangeNeeds > 0) {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &orangePicks);
            if (orangePicks <= 0)
                printf("ERROR: You must pick at least 1!\n");
            else if (orangePicks > orangeNeeds)
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", orangeNeeds);
            else if (orangePicks < orangeNeeds && orangePicks > 0) {
                orangeNeeds = orangeNeeds - orangePicks;
                printf("Looks like we still need some ORANGES...\n");
            }
            else if (orangePicks == orangeNeeds) {
                orangeNeeds = orangeNeeds - orangePicks;
                printf("Great, that's the oranges done!\n\n");
            }
        }
        //Part: Pear - Ask for Pick quantity if Needs is not Zero.
        while (pearNeeds > 0) {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &pearPicks);
            if (pearPicks <= 0)
                printf("ERROR: You must pick at least 1!\n");
            else if (pearPicks > pearNeeds)
                printf("You picked too many... only %d more PEAR(S) are needed.\n", pearNeeds);
            else if (pearPicks < pearNeeds && pearPicks > 0) {
                pearNeeds = pearNeeds - pearPicks;
                printf("Looks like we still need some PEARS...\n");
            }
            else if (pearPicks == pearNeeds) {
                pearNeeds = pearNeeds - pearPicks;
                printf("Great, that's the pears done!\n\n");
            }
        }
        //Part: Tomato - Ask for Pick quantity if Needs is not Zero.
        while (tomatoNeeds > 0) {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &tomatoPicks);
            if (tomatoPicks <= 0)
                printf("ERROR: You must pick at least 1!\n");
            else if (tomatoPicks > tomatoNeeds)
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", tomatoNeeds);
            else if (tomatoPicks < tomatoNeeds && tomatoPicks > 0) {
                tomatoNeeds = tomatoNeeds - tomatoPicks;
                printf("Looks like we still need some TOMATOES...\n");
            }
            else if (tomatoPicks == tomatoNeeds) {
                tomatoNeeds = tomatoNeeds - tomatoPicks;
                printf("Great, that's the tomatoes done!\n\n");
            }
        }
        //Part: Cabbages - Ask for Pick quantity if Needs is not Zero.
        while (cabbageNeeds > 0) {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &cabbagePicks);
            if (cabbagePicks <= 0)
                printf("ERROR: You must pick at least 1!\n");
            else if (cabbagePicks > cabbageNeeds)
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cabbageNeeds);
            else if (cabbagePicks < cabbageNeeds && cabbagePicks > 0) {
                cabbageNeeds = cabbageNeeds - cabbagePicks;
                printf("Looks like we still need some CABBAGES...\n");
            }
            else if (cabbagePicks == cabbageNeeds) {
                cabbageNeeds = cabbageNeeds - cabbagePicks;
                printf("Great, that's the cabbages done!\n\n");
            }
        }
        printf("All the items are picked!\n\n");
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &shopAgain);
        printf("\n");
    } while (shopAgain != 0);
    printf("Your tasks are done for today - enjoy your free time!\n");
    return 0;
 }