#include<stdio.h>

main()
{
	// Q2. Find the maximum element from given 2D Array...!!
	 
	int i, j, m, n, max;
	
	printf("Enter The Array's Row size :- ");
	scanf("%d",&m);
	printf("Enter The Array's column size :- ");
	scanf("%d",&n);
	
	int ary[m][n];
	
	printf("\nEnter the elements of an array :- \n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\na[%d][%d] :- ",i,j);
			scanf("%d",&ary[i][j]);
		}
	}
	
	max = ary[0][0];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(ary[i][j] > max)
			{
				max = ary[i][j];
			}
		}
	}
	
	printf("\nThe Maximum number from given array is :- %d",max);
	
	
}