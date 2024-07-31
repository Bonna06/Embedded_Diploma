#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void  prime(int n1,int n2);
int main()
{
    int n1,n2;
    printf("enter two number\n");
    scanf("%d %d",&n1,&n2);

  prime(n1,n2);


    return 0;
}
void  prime(int n1,int n2)
{
    int count=0;
for(int i=n1;i<=n2;i++)
{
   for(int j=1;j<i;j++)
   {
       if(i%j==0)
        {
            count++;
        }
   }
   if(count<2)
   {
       printf("%d\t",i);
   }
   count=0;
}


}
