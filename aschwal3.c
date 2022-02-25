
/* -----------------------------------------------------------------------------------------------------*/

Program file:		aschwal3.c
Author:             Ariel Schwalb
Date: 				February 21, 2022
Assignment: 		#3
Objective:			This program calculates and prints the average of several grades entered by the user.

/*----------------------------------------------------------------------------------------------------- */

#include <stdio.h>

int main (void)

{

    /* Declare variables. */
    /* ------------------ */

    int totalGrades = 0, numOfGrades = 0 , grade = 0, x;
    float average;
    char c;

    /* Introduce the program to the user. */
    /* ---------------------------------- */

    printf("This program calculates the average of as many grades you wish to enter.\n");

    /* Prompt the user for the number of grades to process. Then prompt the user to enter the grades to be averaged. */
    /* ------------------------------------------------------------------------------------------------------------- */

    printf("First, enter the number of grades to process: ");
    scanf("%d", &numOfGrades);
    while ( (c = getchar() != '\n') && c != EOF); /* clear input buffer */

    printf("Now enter the %d grades to be averaged.\n", numOfGrades);

    /* The for loop allows the grades to be inputted and saved. */
    /* -------------------------------------------------------- */


    for ( x = 1; x <= numOfGrades; x++ )
 {

    printf ("Enter grade (0 - 100): ");
    scanf ("%i", &grade);

    /* Ensure grade is between 0 and 100. If not, re-prompt. */
    /* ----------------------------------------------------- */

    if (grade < 0 || grade > 100)

 {

    printf ("*** Invalid Grade Entered ***.\n");
    x--;
    continue;

 }

    /* All of the inputted grades are added together and saved into a variable. */
    /* ------------------------------------------------------------------------ */

    totalGrades = totalGrades + grade;
    ( (c = getchar() != '\n') && c != EOF); /* clear input buffer */
 }

    /* Calculate the average. */
    /* --------------------------------------------------------- */

    average = totalGrades / numOfGrades;

    /* Print the average of the grades. */
    /* -------------------------------- */

    printf("The average of the %d grades entered is %f.\n", numOfGrades, average);

    /* Tell the user the letter grade they have. */
    /* ----------------------------------------- */

    if ( average >= 90 )
        printf ("You have a letter grade of A\n");
    else if ( average >= 80 && average <= 89 )
        printf ("You have a letter grade of B\n");
    else if ( average >= 70 && average <= 79 )
        printf ("You have a letter grade of C\n");
    else if ( average >= 60 && average <= 69 )
        printf ("You have a letter grade of D\n");
    else
        printf ("You failed.\n");

    return 0;
}
    /* end main*/











