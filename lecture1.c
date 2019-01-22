#include <stdio.h>
/*code to determine whether a person has failed or not
Date:22/01/2019
Day:Tuesday
*/
/* double is more accurate than float
The value of the number doesn't change even after .2 in the placeholder. 
Only a round-off version is printed*/
void main()
{
	int grade1=0;
	int grade2=0,grade3=0;
	float average=0;
	
	//enter the first grade//
	printf("Enter grade1:");
	scanf("%d",&grade1);
	
	//enter the second grade//
	printf("Enter grade2:");
	scanf("%d",&grade2);
    
	//enter the third grade//
	printf("Enter grade3:");
	scanf("%d",&grade3);

	average=(grade1+grade2+grade3)/3;
	if(average>=40)
	{
		printf("Passed,with average = :%.5f\n",average);
	}
	else
	{
		printf("Failed,with average = :%.5f\n",average);
	}
	system("pause");

}
