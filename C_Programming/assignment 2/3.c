#include <stdio.h>
#include <stdlib.h>
void reverse(void);
int n;
int main()
{

    printf("enter sentence\n");
  reverse();


    return 0;
}
void reverse(void)
{
  char c;
  scanf("%c",&c);
  if(c!='\n')
    {
        reverse();
        printf("%c",c);

    }

    return f;
}



