#include <stdio.h>
#include <stdlib.h>

int main()
{
 float arr1[2][2];
 float arr2[2][2];
 float sum[2][2];
 printf("please enter first array\n");
 for(int i=0;i<2;i++)
 {
     for(int j=0;j<2;j++ )
     {
         scanf("%f",&arr1[i][j]);
     }
 }
printf("please enter second array\n");
 for(int i=0;i<2;i++)
 {
     for(int j=0;j<2;j++ )
     {
         scanf("%f",&arr2[i][j]);
     }
 }
 printf("sum of matrix :\n");
 for(int i=0;i<2;i++)
 {
     for(int j=0;j<2;j++ )
     {
         printf("%.1f\t",arr1[i][j]+arr2[i][j]);
     }
     printf("\n");
 }

    return 0;
}
