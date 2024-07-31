#include <stdio.h>
#include <stdlib.h>
int fact(int n);
  int n,f=1;
int main()
{

  printf("  enter number\n");
  scanf(" %d ",&n);
  printf("Factorial of number %d is;\n",n);
  printf("%d",fact(n))



    return 0;
}
    int fact(int n)
    {
        if(n>0)
        {
            f*=fact(--n)
        }
     return f;
    }



