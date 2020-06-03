#include<stdio.h>
#include<stdlib.h>
int prime(int* num)
{
    int counter=0;
    for(int i=2; i<(*num)/2; i++)
    {
        if((*num)%i==0)
        {
            counter++;
        }
    }
    if(counter==0&&(*num)!=1)printf("It is a prime number");
    else printf("It is not a prime number");
    return 0;
}
int even(int* num)
{
    if((*num)%2==0)printf("It is an even number");
    else printf("It is not an even number");
    return 0;
}
int palindrome(int* num)
{
    int original = *num;
    int reversedN=0,remainder=0;
    while ((*num) != 0)
    {
        remainder = (*num) % 10;
        reversedN = reversedN * 10 + remainder;
        *num /= 10;
    }
    if(reversedN==original) printf("It is a palindrome number");
    else printf("It is not a palindrome number");

}
int perfect(int* num)
{
    int divisors=0;
    for(int i = 1; i<(*num); i++)
    {
        if((*num)%i==0) divisors+=i;
    }
    if(divisors==(*num)) printf("It is a perfect number");
    else printf("It is not a perfect number");
    return 0;
}
int armstrong(int *num)
{
    int originalNum,remainder,result=0;
    originalNum = *num;

    while (originalNum != 0)
    {
        // remainder contains the last digit
        remainder = originalNum % 10;

        result += remainder * remainder * remainder;

        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == *num)
        printf("%d is an Armstrong number.", *num);
    else
        printf("%d is not an Armstrong number.", *num);
    return 0;
}
int main()
{
    int num;
    printf("Which one do you want to check:\n1.Prime\n2.Even or odd\n3.Perfect or not\n4.Palindrome ore not\n5.Armstrong or not\nAnswer in 1 to 5\n");
    int response;
    scanf("%d",&response);
    printf("Enter the number:");
    scanf("%d",&num);
    switch(response)
    {
    case 1:
    {
        prime(&num);
        break;
    }
    case 2:
    {
        even(&num);
        break;
    }
    case 3:
    {
        perfect(&num);
        break;
    }
    case 4:
    {
        palindrome(&num);
        break;
    }
    case 5:
    {
        armstrong(&num);
        break;
    }
    default:
    {
        printf("Answer in 1 to 5 please");
        break;
    }
    }
    return 0;
}
