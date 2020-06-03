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
    printf("Which element do you want to delete? (Array indexes start at 0) ");
    scanf("%d",&position);
    for(int i=position+1; i<=n; i++)
    {
        arr[i-1]=arr[i];
    }
    printf("The new array is \n");
    for(int i=0; i<n-1; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
