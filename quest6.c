#include<stdio.h>
void even(int n)
{
    if(n>0)
    {
        printf(" %d",2*n);
        even(n-1);
    }
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    even(n);
    return 0;
}