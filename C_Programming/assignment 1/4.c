#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c,l;
   printf("enter number of elements:\n");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
    {
        scanf(" %d",&arr[i]);
    }
   printf("enter number to be inserted :\n");
    scanf(" %d",&c);
   printf("enter the location:\n");
       scanf(" %d",&l);
   arr[l-1]=c;
   for(int i=0;i<n;i++)
    {
        printf(" %d\t",arr[i]);
    }
    return 0;
}
