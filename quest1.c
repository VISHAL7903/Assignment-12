#include<stdio.h>
void firstN(int n)
{
    if(n>0)
    {
        firstN(n-1);
        printf(" %d",n);
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
