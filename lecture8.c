//
// Created by mason on 9/24/2021.
//

#include "lecture8.h"

#include<stdio.h>
#include<stdlib.h>

void lecture8(){
    // Factorial
    printf("Factorial:\n")
    long factorialResult = factorial(10);
    printf("Result of 10!: %d\n", factorialResult);

    printf("\nTowers of Hanoi problem: ");
    towersOfHanoi(3, 'A', 'B', 'C');

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

// Solves the towers of hanoi problem using recursion
void towersOfHanoi(int n, char x, char y, char z){
    if (n > 0){
        towersOfHanoi(n - 1, x, z, y);
        printf("/n%c to %c", x, y);
        towersOfHanoi(n - 1, z, y, x);
    } else{

    }
}

