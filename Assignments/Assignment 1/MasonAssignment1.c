//
// Created by mason on 10/6/2021.
//

#include<stdio.h>
#include "MasonAssignment1.h"

int masonAssignment1(){
    printf("\nProblem 3\n");
    problem3();

    printf("\nProblem 6\n");
    //problem6();

    printf("\nProblem 9\n");
    problem9();

    return 0;
}

void problem3(){
    char input[11];

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%s", input);
    int values[10];


    int count = 0;
    do {
        if (input[count] != NULL){
            values[count] = (int) (input[count] - '0');
        }

        count++;
    } while (input[count] != '\0' || input[count] != NULL);
    if (count != 0){
        count--;
    }

    int total = 0;


    printf("\nThe digits of the given number were: ");
    for (int i = 0; values[i] < 10 && values[i] > 0; i++) {
        printf("%d, ", values[i]);
        total += values[i];
    }
    printf("\nThe sum of all digits is %d\n", total);

}

void problem6(){
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
        if (values[i] >= 7 && values[i] <= 10){
            printf("%d, ", values[i]);
        }
    }
}

void problem9(){

}

