#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if(marks>=30)
    {
        printf("The student have passed");
    }
    else if(marks<30)
    {
        printf("The student have f**ked the exam");
    }
    else
    {
        printf("Invalid marks");
    }
    return 0;

}