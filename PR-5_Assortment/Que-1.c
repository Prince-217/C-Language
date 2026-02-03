#include<stdio.h>

main()
{
	// Q1. Find the negative elements from 1D Array...!!
	 
	int i,asize;
	
	
	printf("\nQ1. find negative elements from array..!!\n");
	printf("---------------------------------------------\n");
	
	printf("Enter The Size of array :- ");
	scanf("%d",&asize);
	
	int ary[asize];
	
	for(i=0;i<asize;i++)
	{
		printf("\na[%d] :- ",i);
		scanf("%d",&ary[i]);
	}
	
	printf("\nThe Negative Elements of this array are :- \n");
	
	for(i=0;i<asize;i++)
	{
		if(ary[i] < 0)
		{
			printf("%d, ",ary[i]);
		}
	}
	
	
}