#include<stdio.h>

main()
{
	int i, arsize, num;
	
	printf("Enter The Size Of Array :- ");
	scanf("%d",&arsize);
	
	int a[arsize];
	
	
	for(i=0;i<arsize;i++)
	{
		printf("\nEnter a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nYour Array Is :- %a",a);
	
	
	
}