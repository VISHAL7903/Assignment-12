#include<stdio.h>
void binary(int n)
{
    if(n>0)
    {
        binary(n/2);
        printf("%d",n%2);
    }
}
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    binary(n);
    return 0;
}