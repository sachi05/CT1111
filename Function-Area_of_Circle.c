#include <stdio.h>
#include <math.h>

/************************************/
/********** Area of Circle *********/
/* Note the use of 'math' library */
/*********************************/

float area_circle(radius); // function prototype

void main()
{
    
    printf("%.2f",area_circle(2)); // function call
    
}

float area_circle(radius) // function header
{
    float area = 3.14 * pow(radius,2);
    return(area);
}
