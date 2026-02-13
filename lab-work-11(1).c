#include<stdio.h>

void main(){
    
    //Q1. WAP to find square of each element of given 1D array using Pointer...!! 
    
    int i,size;
    
    printf("Enter the array's size :- ");
    scanf("%d",&size);
    
    int a[size];
    
    for(i=0;i<size;i++)
    {
        printf("\na[%d] => ",i);
        scanf("%d",&a[i]);
    }
    
    int *p;
    
    printf("\nThe new array is :- ");
    
    for(i=0;i<size;i++)
    {
        p = &a[i];
        printf("%d ",(*p)*(*p));
        printf(",");
    }
    
    
    //Q2. WAP to swap two variables using pointer...!!
    
    printf("\n\nSwappping programme...!!\n\n");
    
    int m,n,temp;
    
    printf("\nEnter The value of A :- ");
    scanf("%d",&m);
    
    printf("Enter The value of B :- ");
    scanf("%d",&n);
    
    int *p1, *p2;
    
    p1 = &m;
    p2 = &n;
    
    printf("\nBefore A & B\n");
    printf("A => %d , %u",m,p1);
    printf("\nB => %d , %u",n,p2);
    
    temp = m;
    m = n;
    n = temp;
    
    printf("\nBefore A & B\n");
    printf("A => %d , %u",m,p1);
    printf("\nB => %d , %u",n,p2);    
}
