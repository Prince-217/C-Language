#include<stdio.h>

main()
{
	
	// Q3. Find transpose matrix from given array...!!
	 
	int i, j, m, n;
	
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
	
	printf("\nYour Array matrix is :- \n");
		
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",ary[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTranspose matrix is :- \n");
		
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",ary[j][i]);
		}
		printf("\n");
	}
		
	
}