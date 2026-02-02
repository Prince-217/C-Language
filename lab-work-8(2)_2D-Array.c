#include<stdio.h>

main()

{
	// WAP To find average of given 2D Array...!!
	
	int i, j, m, n, sum = 0;
	float aravg;
	
	printf("\n=================================\n");
	printf("Q1. Find The Average Of 2D Array...!!");
	printf("\n=================================\n");
	printf("Enter the array's row size :- ");
	scanf("%d",&m);
	printf("Enter the array's column size :- ");
	scanf("%d",&n);
	
	int ary[m][n];
	
	printf("Enter array's elements :- \n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\na[%d][%d] :- ",i,j);
			scanf("%d",& ary[i][j]);
			
			sum += ary[i][j];
		}
	}
	
	aravg = sum / (m*n);
	
	printf("\nAverage of an array :- %f",aravg);
	
}