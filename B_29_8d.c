#include<stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    return n%10 + sum(n/10);
}
int main()
{
    int n,s;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    s=sum(n);
    printf("\nSum: %d",s);
    return 0;
}