//
// Created by nishant on 10/9/24.
//
#include <stdio.h>

int main() {
    char input;
    printf("Enter character: ");
    scanf(" %c", &input);

    if ('a' <= input && input <= 'z') {
        printf("Small\n");
    }
    else if ('A' <= input && input <= 'Z') {
        printf("Capital\n");
    }
    else if ('0' <= input && input <= '9') {
        printf("Digit\n");
    }
    else if ('')
}