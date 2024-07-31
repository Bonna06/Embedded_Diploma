#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char arr[100];
    char c;
    int f=0;
    printf("enter string \n");
    gets(arr);


    for(int i=0;1;i++)
    {

        if(arr[i]!=0)
        {
            f+=1;
        }else
        {
            break;
        }
    }
        printf("frequency of %c=%d\n",c,f);

    return 0;
}
