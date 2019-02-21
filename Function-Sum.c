#include <stdio.h>

/*********************************/
/*** Note the use of 'return' ***/
/*******************************/

float sum(float num_1, float num_2); // function prototype

void main()
{
    float average = sum(3,4)/2; // function call
    printf("%.2f",average);
    
}

float sum(float num_1, float num_2) // function header
{
    float add = num_1 + num_2;
    return(add);
}
