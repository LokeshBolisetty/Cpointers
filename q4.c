#include<stdio.h>
#include<stdlib.h>
float avg;
char grade;
float average(float *a)
{
    avg=((*a)+(*(a+1))+(*(a+2)))/3;
    return avg;
}
int grader(float* avh)
{
    if(*avh>=85.0)grade='A';
    else if(85.0>*avh&&*avh>=60.0)grade='B';
    else if(60.0>*avh&&*avh>=55.0)grade='C';
    else if(55.0>*avh&&*avh>=40.0)grade='D';
    else if(40.0>*avh)grade='F';
    return 0;
}

int main()
{
    printf("Enter the marks scored by the student in three subjects:");
    float sub[3];
    scanf("%f %f %f",&sub[0],&sub[1],&sub[2]);
    avg=average(&sub[0]);
    grader(&avg);
    printf("His average is %f and hence his grade is %c\n",avg,grade);
    return 0;
}
