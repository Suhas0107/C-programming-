#include<stdio.h>

void main()
{
	int a,b;
	printf("Enter the values of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("Before Swap a=%d b=%d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swap a=%d b=%d",a,b);
}
