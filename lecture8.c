//
// Created by mason on 9/24/2021.
//

#include "lecture8.h"

#include<stdio.h>
#include<stdlib.h>

void lecture8(){
    long factorialResult = factorial(10);
    printf("%d", factorialResult);

}

long factorial(long number){
    long base = 0;
    if (number == base){ // base case
        return 1;
    } else { // recursive case
        return number * factorial(number - 1);
    }
}