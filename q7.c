#include<stdio.h>
int primeprinter(int *n)
{
    for(int j=2; j<=*n; j++)
    {
        int count=0;
        for(int i=1; i<=j; i++)
        {
            if(j%i==0)
            {
                count++;

            }
        }
        if(count==2)
        {
            printf("%d\t",j);
        }
    }
}
int main()
{
    printf("Enter the number upto which you want to get the prime numbers");
    int n;
    scanf("%d",&n);
    primeprinter(&n);
    return 0;
}
