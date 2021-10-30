#include <stdio.h>

int s=0;
int sumofdigits(int n);

int main()
{
    int n,sum;
    printf("Input number: ");
    scanf("%d",&n);
    sum=sumofdigits(n);
    printf("Sum of Digits: %d",sum);
    return 0;
}

int sumofdigits(int n)
{

    s=s+(n%10);
    n=(n/10);

    if (n!=0){
        sumofdigits(n);
    }
    return s;
}
