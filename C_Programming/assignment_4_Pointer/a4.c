#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr=NULL;
    int Max[15];
    int n;
    printf("enter number of elements \n");
    scanf("%d",&n);

    ptr=Max;
    for(int i=0; i<n; i++)
    {
        printf("element %d:",i+1);
        scanf(" %d",ptr);
        ptr++;
    }
    ptr=&Max[n-1];
    printf("--------------------\n");
    for(int i=n; i>0; i--)
    {
        printf("element %d:%d\n",i,*ptr);

        ptr--;
    }
    return 0;
}
