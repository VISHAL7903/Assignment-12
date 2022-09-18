#include<stdio.h>
void firstN(int n)
{
    if(n>0)
    {
        printf(" %d",n);
        firstN(n-1);
    }
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    firstN(n);
    return 0;
}