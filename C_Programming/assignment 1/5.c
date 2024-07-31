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

   printf("enter number to be searched :\n");
    scanf(" %d",&c);
    for(int i=0;i<n;i++)
    {
      if(arr[i]==c)
      {
          l=i;
          break;
      }
    }


   printf("number found at location =%d:\n",l+1);


    return 0;
}
