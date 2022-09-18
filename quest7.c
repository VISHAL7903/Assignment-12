#include<stdio.h>
void square(int n)
{
    if(n>0)
    {
        square(n-1);
        printf(" %d",n*n);
    }
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    square(n);
    return 0;
}