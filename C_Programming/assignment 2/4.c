#include <stdio.h>
#include <stdlib.h>
int power (int n1,int n2);
int n1,n2;
int main()
{

    printf("enter base\n");
    scanf("%d",&n1);
    printf("enter power\n");
    scanf("%d",&n2);
    printf("%d^%d=%d",n1,n2,(power(n1,n2)));

    return 0;
}
int power (int n1,int n2)
{
 if(n2!=0)
 {
     return (n1*power(n1,--n2));
 }
else
    return 1;
}



