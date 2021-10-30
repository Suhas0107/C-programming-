#include<stdio.h>

int main()
{
	int a,b=0;
	while (b<6)
	{
		a=0;
		while(a<=b)
		{
			printf("01");
			a++;
		}
		b++;
		printf("\n");
	}
	return 0;
}
