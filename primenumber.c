#include <stdio.h>
int l=2;

int checkprime(int n){
    if (n%l==0){
        return 1;
    }
    l++;
    if (l<=(n/2)){
        checkprime(n);
    }
    return 0;
}


int main()
{
    int n,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    k=checkprime(n);
    if (k==0){
        printf("%d is a Prime Number",n);
    }
    else{
        printf("%d is not a Prime Number",n);
    }
    return 0;
}
