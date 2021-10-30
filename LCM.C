#include <stdio.h>
int l=1;
int findlcm(int n1,int n2)
{

    if ((l%n1==0)&&(l%n2==0)){
        return l;
    }
    l++;
    findlcm(n1,n2);
    return l;
}

int main()
{
    int n1,n2,lcm;
    printf("Input first number: ");
    scanf("%d",&n1);
    printf("Input second number: ");
    scanf("%d",&n2);
    lcm= findlcm(n1,n2);
    printf("LCM of %d and %d = %d",n1,n2,lcm);
    return 0;
}
