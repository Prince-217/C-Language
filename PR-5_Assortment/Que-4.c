#include<stdio.h>

main()
{
	// Q4. Find the sum of given row and column's elements from given 2D array...!!
	
	int m, n, i, j, rno, rsum = 0, cno, csum = 0;
	
	printf("Enter Array's row size :- ");
	scanf("%d",&m);
	printf("Enter Array's column size :- ");
	scanf("%d",&n);
	
	int ary[m][n];
	
	printf("\nEnter the elements of array :- \n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\na[%d][%d] :- ",i,j);
			scanf("%d",&ary[i][j]);
		}
	}
	
	printf("\nEnter the row number :- ");
	scanf("%d",&rno);
	
	i = rno;
	
	printf("Elements of row :- ");
	for(j=0;j<n;j++)
	{
		printf("%d ",ary[i][j]);
		rsum += ary[i][j];
	}
	
	printf("\nThe Sum of row elements is :- %d\n\n",rsum);
	
	printf("\nEnter the column number :- ");
	scanf("%d",&cno);
	
	j = cno;
	
	printf("Elements of column :- ");
	for(i=0;i<m;i++)
	{
		printf("%d ",ary[i][j]);
		csum += ary[i][j];
	}
	
	printf("\nThe Sum of sum elements is :- %d\n\n",csum);

}