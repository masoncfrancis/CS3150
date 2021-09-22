//
// Created by mason on 9/20/2021.
//

#include<stdio.h>

void lecture5(){

    printf("Demonstrating do-while loop\n");

    int num = 1;
    // Do while loop to print 1 through 10

    do {
        printf("%d\n", num++);
    } while (num <= 10);

    printf("\nDemonstrating continue statement\n");

    // Demonstrate continue statement
    num = 1;
    do {
        if(num == 5){
            num++;
            continue;
        }
        printf("%d\n", num++);
    } while (num <= 10);

    return 0;
}

