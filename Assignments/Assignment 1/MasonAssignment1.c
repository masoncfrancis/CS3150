//
// Created by mason on 10/6/2021.
//

#include<stdio.h>
#include "MasonAssignment1.h"

int masonAssignment1() {
    printf("\nProblem 3\n");
    problem3();

    printf("\nProblem 6\n");
    problem6();

    printf("\nProblem 9\n");
    problem9();

    printf("\nProblem 12\n");
    problem12();

    return 0;
}

// Prompts the user for an integer. It then adds together all of the digits
// and prints the result to the console
void problem3() {
    char input[31];

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%s", input);
    int values[30];


    int count = 0;
    do {
        if (input[count] != NULL) {
            values[count] = (int) (input[count] - '0');
        }

        count++;
    } while (input[count] != '\0' || input[count] != NULL);
    if (count != 0) {
        count--;
    }

    int total = 0;


    printf("\nThe digits of the given number were: ");
    for (int i = 0; values[i] < 10 && values[i] >= 0; i++) {
        printf("%d, ", values[i]);
        total += values[i];
    }
    printf("\nThe sum of all digits is %d\n", total);

}

// The user is prompted for 10 integers, and any integers in the range 7-10
// are printed to the console
void problem6() {
    int values[10];

    // Gather input from user
    for (int i = 0; i < 10; i++) {
        printf("Enter an integer value: ");
        int input;
        scanf("%d", &input);
        values[i] = input;
    }

    // Parse and print array contents
    printf("\nThese numbers fall within the range 7-10:\n");
    for (int i = 0; i < 10; i++) {
        if (values[i] >= 7 && values[i] <= 10) {
            printf("%d, ", values[i]);
        }
    }
}

// Multiplies two matrices
void problem9() {
    int array1[][3] = {{1, 2, 3},
                  {3, 2, 1}};

    int array2[][3] = {{4, 5, 6},
                  {2, 3, 4},
                  {8, 7, 6}};

    int productArray[2][3];

    printf("Resulting matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++){
            int singleTotal = 0;
            for (int k = 0; k < 3; k++){
                int product = array1[i][k] * array2[k][j];
                singleTotal += product;
            }
            printf("%d, ", singleTotal);
            productArray[i][j] = singleTotal;

        }
        printf("\n");

    }

}

void problem12() {

    printf("Enter one or more words: ");
    char input[100];

    fgets(input, 100, stdin);

    // Count how many letters there are in the char array
    int letterCount = 0;
    for(int i = 0; i < 100; i++){
        if (input[i] == 10){
            break;
        } else if ((input[i] >= 65 && input[i] <= 90) || (input[i] >= 97 && input[i] <= 122)){
            letterCount++;
        }
    }

    // Create array to contain the appropriate number of letters
    // fill it with letters from the string, ignoring any non-letter characters
    char letters[letterCount];
    int letterArrayIndex = 0;
    for (int i = 0; i < 100; i++) {
        if (input[i] == 10){
            break;
        }
        if ((input[i] >= 65 && input[i] <= 90) || (input[i] >= 97 && input[i] <= 122)){
            letters[letterArrayIndex] = input[i];
            letterArrayIndex++;
        }
    }

    int palindromeResult = testPalindrome(letters, letterCount, 0);

    switch (palindromeResult) {
        case 0:
            printf("\nThe string is not a palindrome");
            break;
        case 1:
            printf("\nThe string is a palindrome");
            break;
    }

}

int testPalindrome(char charArray[], int arrayLength, int currentIndex){
    int maxIndex = arrayLength - 1;
    int maxCheckedIndex = (arrayLength / 2) + (arrayLength % 2);

    if (currentIndex == maxCheckedIndex && charArray[currentIndex] == charArray[maxIndex - currentIndex]) { // Base case
        return 1;
    } else if (charArray[currentIndex] != charArray[maxIndex - currentIndex]){ // Base case
        return 0;
    } else {
        return testPalindrome(charArray, arrayLength, currentIndex + 1);
    }


}


