#include<stdio.h>
void oddrev(int n)
{
    if(n>0)
    {
        printf(" %d",2*n-1);
        oddrev(n-1);
    }
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    oddrev(n);
    return 0;
}