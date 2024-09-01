#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *ptr=NULL;
    char str[100]="w3resource ";
    printf("%s\n",str);
    ptr=str;
    ptr=ptr+strlen(str);
    for(int i=0; i<=strlen(str); i++)
    {
        printf("%c",*ptr);
        ptr--;
    }

    return 0;
}
