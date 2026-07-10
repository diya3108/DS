/*Create an array of size 10, input values and display sum and average of all elements in array.
Name: Diya Ambaliya
Enrollment: 92500527126 */

#include<stdio.h>
void main()
{
    int a[20],i,n,sum=0;
    float avg=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter value:",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    avg=(float)sum/n;
    printf("Entered value are as follow \n");
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
    printf("\n sum is %d",sum);
    printf(" \n avg is %f",avg);
}
