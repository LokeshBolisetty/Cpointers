#include<stdio.h>
#include<stdlib.h>

int compare2(int* a, int*b)
{

    if(*a>*b)return*a;
    return *b;

}
int compare3(int*a,int*b,int*c)
{
    int t;
    if(*a>*b)
        t=*a;
    else
        t=*b;
    if(t>*c)
        return t;
    return *c;

}

void main()
{
    printf("How many number do you want to compare 2 or 3?");
    int response;
    scanf("%d",&response);
    if(response==2)
    {
        printf("Enter any two numbers:");
        int a,b;
        scanf("%d %d",&a,&b);
        int great = compare2(&a,&b);
        printf("%d is the greater of the entered numbers.",great);
    }
    else if(response==3)
    {
        printf("Enter any three numbers:");
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int great = compare3(&a,&b,&c);
        printf("%d is the greater of the entered numbers.",great);

    }
    else
    {
        printf("Please answer in 2 or 3");
    }
}
