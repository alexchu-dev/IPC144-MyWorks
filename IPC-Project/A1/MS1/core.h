/*
*****************************************************************************
                        Assignment 1 - Milestone 1
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

// ----------------------------------------------------------------------------
// function prototypes

// Clear the standard input buffer
void clearInputBuffer(void);

// Wait for user to input the "enter" key to continue
void suspend(void);

// Validate integer input
int inputInt(void);

// Validate positive integer input
int inputIntPositive(void);

// Set input range
int inputIntRange(int lower, int upper);

// Check input character matches C string
char inputCharOption(const char validChar[]);

// Copy Strings without using strlib
char* cus_strcpy(char* str2, const char* str1);

// Check input character string
void inputCString(char* stringPtr, int lower, int upper);

// Display array of 10 digits as formatted phone
void displayFormattedPhone(char* stringPtr);