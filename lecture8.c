//
// Created by mason on 9/24/2021.
//

#include "lecture8.h"

#include<stdio.h>
#include<stdlib.h>

void lecture8(){
    // Factorial
    printf("Factorial:\n");
    long factorialResult = factorial(10);
    printf("Result of 10!: %d\n", factorialResult);


}

// Returns the factorial of 'number'
long factorial(long number){
    long base = 0;
    if (number == base){ // base case
        return 1;
    } else { // recursive case
        return number * factorial(number - 1);
    }
}



