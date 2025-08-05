#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    
    // Your code goes here
    
    //Initialize array
    int result_array[100];

    // initialize array to store the counts of each unqiue value of the dice rolls
    int counts[6] = {0,0,0,0,0,0};

    // Initialize the running total of all dice rolls
    int sum = 0;

    for (int i = 0; i < 100; i++) {
        // "roll" the dice
        int dice_roll = (rand() % 6) + 1;
        
        // add the result to the array
        result_array[i] = dice_roll;
        
        // count up the respective value | since dice_roll is 1-6 and counts is 0-5, we subtract 1 
        counts[dice_roll-1] += 1;
        
        // add dice roll to running total
        sum += dice_roll;
    }

    //Print out the count of each unique number
    for (int i = 0; i < 6; i++) {
        printf("%d\n", counts[i]);
    }
    // Print sum
    printf("%d\n", sum);

    // Print out the average with a specificity of one decimal
    printf("%.1f\n", sum/100.0);

    return 0;
}
