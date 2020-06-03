#include<stdio.h>
#include<stdlib.h>
void update(int* a,int* b)
{
    int t= *a;
    (*a)=(*a)+(*b);
    (*b)=abs(t-(*b));
}
int main()
{
    int a,b;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    update(&a,&b);
    printf("Sum: %d\nDifference:%d",a,b);
    return 0;
}
