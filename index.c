#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
void main()
{
    int a,b;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("The sum is :%d ",sum(a,b));
}