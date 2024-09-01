#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr=NULL;
    char alph[27];
    ptr=alph;
    for(int i=0; i<26; i++)
    {
        *ptr=i+'A';
        ptr++;
    }
    ptr=alph;
    printf("Print all alphabets\n");
    for(int i=0; i<26; i++)
    {

        printf(" %c",*ptr);

        ptr++;
    }

    return 0;
}
