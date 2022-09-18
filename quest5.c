#include<stdio.h>
void even(int n)
{
    if(n>0)
    {
        even(n-1);
        printf(" %d",2*n);
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