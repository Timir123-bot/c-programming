#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the range of number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=i*i;
    printf("The sum of the series = %d",sum);
}