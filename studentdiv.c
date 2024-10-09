
#include <stdio.h>
#include <string.h>
 
void main()
{
    int rollNo,marks1,marks2,marks3,total;
    float percentage;
    char name[20];
    printf("Enter the Roll Number of the student : ");
    scanf("%d",&rollNo);
    printf("Enter the Name of the Student : ");
    scanf("%s",name);
    printf("Enter the marks of first subject : ");
    scanf("%d",&marks1);
    printf("Enter the marks of second subject : ");
    scanf("%d",&marks2);
    printf("Enter the marks of third subject : ");
    scanf("%d",&marks3);
    total = marks1+marks2+marks3;
    percentage = total/3.0;
    printf("Total marks = %d\n",total);
    printf("Percentage = %5.2f\n",percentage);
 
    if (percentage>=60)
     printf("Division = First");
    else
    if (percentage<60 && percentage>=48)
        printf("Division = Second");
    else
        if (percentage<48 && percentage>=36)
        printf("Division = Third");
         else
        printf("Division = Fail");
}