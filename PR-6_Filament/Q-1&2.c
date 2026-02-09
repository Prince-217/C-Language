#include<stdio.h>

main()
{	
	int i, j = 0, a, length = 0, temp;
	char str[100], revstr[100], str2[100];
	
	// Q1. Check Palindrome or not...!!
	
	printf("Enter any string :- ");
	scanf("%s",&str);
	
	for(i=0; str[i] != '\0'; i++)
	{
		length++;
	}
	
	
	for(i=length-1; i>=0; i--)
	{
		revstr[j] = str[i];
		j++;
	}
	
	printf("\nreverese :- %s\n",revstr);
	
	for(i=0; i<length ;i++)
	{
		if(str[i] != revstr[i])
		{
			temp = 0;
		}
		else
		{
			temp = 1;
		}
	}
	
	if(temp == 1)
	{
		printf("\nThis string is palindrome...!!");
	}
	
	else
	{
		printf("\nThis string is not palindrome...!!");
	}
	
	
	// Q2. Count all letters...!!
	
	printf("\n\nQ2.count all charaters...!!\n\n");
	
	printf("Enter any string :- ");
	scanf("%s",&str2);
	
	for(i = 0; str2[i] != '\0'; i++)
    {
        a = 0;

        for(j = 0; j < i; j++)
        {
            if(str2[i] == str2[j])
            {
                break;
            }
        }

        if(j < i)
        {
            continue;
        }
        
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str2[i] == str2[j])
            {
                a++;
            }
        }

        printf("%c => %d\n", str2[i], a);
    }
		
}
  