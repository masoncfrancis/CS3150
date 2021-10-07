//
// Created by mason on 10/6/2021.
//

#include<stdio.h>
#include "MasonAssignment1.h"

int masonAssignment1(){
    printf("\nProblem 3\n");


    printf("\nProblem 6\n");
    problem6();

    printf("\nProblem 9\n");
    problem9();

    return 0;
}

void problem3(){
    char input[11];

    // Prompt the user for input
    scanf("%s", input);
    int values[10];
    // @TODO finish implementing problem 3
}

void problem6(){
    int values[10];

    // Gather input from user
    for (int i = 0; i < 10; i++) {
        printf("Enter a value: ");
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

