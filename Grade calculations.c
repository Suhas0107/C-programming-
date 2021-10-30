#include<stdio.h>

void main()
{
	int marks;
	char grade;
	printf("Enter the Students Marks: \n");
	scanf("%d",&marks);
	if (marks<=100&&marks>=85)
  {
		grade='A';
	}
	else if (marks<=84&&marks>=70)
  {
		grade='B';
	}
	else if (marks<=69&&marks>=55)
  {
		grade='C';
	}
  else if (marks<=54&&marks>=40)
  {
		grade='D';
	}
  else{
		grade='F';
	}
	printf("The Student has got Grade %c",grade);
}
