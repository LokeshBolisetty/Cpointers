#include<stdio.h>
#include<stdlib.h>
//Without auxiliary operator
int swap2(int* a, int* b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return 0;
}
//With auxiliary pointerd
int swap3(int* a,int* b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

void main()
{
    int response,a,b;
    while(1)
    {
        printf("How many pointers do you want to use for swapping 2 or 3?");
        scanf("%d",&response);
        if(response==2||response==3)break;
    }
    printf("Enter any two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before swapping: %d %d\n",a,b);
    if(response==2)
        swap2(&a,&b);
    if(response==3)
        swap3(&a,&b);
    printf("After Swapping: %d %d\n",a,b);
}
