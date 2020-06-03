#include<stdio.h>
int position,newnum,n;
int main()
{
    printf("How many elements are there in the array?");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Where do want to enter the new element ?(Array indexes start at 0)");
    scanf("%d",&position);
    printf("Enter the number to be inserted:");
    scanf("%d",&newnum);
    for(int i=n; i>=position; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position]=newnum;
    printf("The new array is \n");
    for(int i=0; i<=n; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
