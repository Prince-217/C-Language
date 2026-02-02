<<<<<<< HEAD
#include<stdio.h>

main()

{
	int i, j, k;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(((i==2) && (j==2 || j==3 || j==4)) || ((i==4) && (j==2 || j==3 || j==4 || j==5)) || ((i==5) && (j==2 || j==3 || j==4 || j==5)))
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
=======
#include<stdio.h>

main()

{
	int i, j, k;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(((i==2) && (j==2 || j==3 || j==4)) || ((i==4) && (j==2 || j==3 || j==4 || j==5)) || ((i==5) && (j==2 || j==3 || j==4 || j==5)))
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
>>>>>>> dc6dcf32c016ecc780fbf3bfaf3637b6ed8fc03e
}