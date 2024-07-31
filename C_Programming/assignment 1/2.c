#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 float sum=0;

 printf("please enter number of elements\n");
 scanf("%d",&n);
float arr[n];
for(int i=0;i<n;i++)
{
    printf("enter number:");
     scanf("%f",&arr[i]);
     printf("\n");
}
for(int i=0;i<n;i++)
{
    sum+=arr[i];
}
printf("averege=%.2f",(sum/n));
    return 0;
}
