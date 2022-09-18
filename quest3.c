#include<stdio.h>
void oddN(int n)
{
    if(n>0)
    {
        oddN(n-1);
        printf(" %d",2*n-1);
    }
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    oddN(n);
    return 0;
}