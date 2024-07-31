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

    printf("enter character \n");
    scanf("%c",&c);
    for(int i=0;i<strlen(arr);i++)
    {

        if(arr[i]==c)
        {
            f+=1;
        }
    }
        printf("frequency of %c=%d\n",c,f);

    return 0;
}
