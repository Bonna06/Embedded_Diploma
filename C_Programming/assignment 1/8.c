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


    for(int i=strlen(arr)-1;i>=0;i--)
    {


        printf("%c",arr[i]);
    }
    return 0;
}
