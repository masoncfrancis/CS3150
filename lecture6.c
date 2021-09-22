//
// Created by mason on 9/22/2021.
//

#include<stdio.h>
#include<stdlib.h>




void lecture6(){
    int first = promptForInt();
    int second = promptForInt();
    int third = promptForInt();

    int highest = highestInt(first, second, third);
    printf("The highest int is %d", highest);
    return 0;
}



int promptForInt(){
    printf("Enter an integer: ");
    int input;
    scanf("%d", &input);
    return input;
}

int highestInt(int first, int second, int third){
    if (first >= second && first >= third){
        return first;
    } else if (second >= first && second >= third){
        return second;
    } else if (third >= first && third >= second){
        return third;
    }
}