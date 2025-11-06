/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description:2D array
i. Define an array data structure

An array is a data structure that stores a fixed-size sequential collection of elements of the same data type.*/

/*int scores[2][2] = (

(65,92).

(84,72)*/

/* Question I: define a 2x2 array named scores and print its elements */
#include <stdio.h>

int main(void) {
    
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            
            printf("%d\t", scores[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}