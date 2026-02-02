#include<stdio.h>

main()

{
	// Q1. Skkipping 3 Alphabets...!!
	
	int dig=97;
	
	do{
		printf("\n%c",dig);
		dig+=4;
	}while(dig<=122);
	
	// Q2. Count digits...!!
	
	int temp=0,num;
	
	printf("\nEnter Any Number :- ");
	scanf("%d",&num);
	
	do{
		num = num/10;
		temp++;
	}while(num!=0);
	
	printf("\nThe Total Digit In this Number is :- %d",temp);
	
	
	// Q3. Sum of First And Last digits...!!
	
	int no, lstdig, firstdig, sumt;
	
	
	printf("\n\nEnter any number :- ");
	scanf("%d",&no);
	
	lstdig = no % 10;
	
	while(no > 10)
	{
		no = no / 10;		
	}
	firstdig = no;
	
	sumt = firstdig + lstdig;
	
	printf("\nThe Sum Of First And Last Digit Of Your Number Is :- %d",sumt);
	
	

}
