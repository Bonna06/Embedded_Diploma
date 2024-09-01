#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ab;
    int m;
    m=29;
    printf("address of m :%p\n",&m);
    printf("value of m :%d\n",m);
    ab=&m;
     printf("address of pointer :%p\n",ab);
    printf("content of pointer :%d\n",*ab);
    m=34;
    printf("value of m :%d",m);
     printf("address of pointer :%p\n",ab);
    printf("content of pointer :%d\n",*ab);
    *ab=7;
     printf("content of pointer :%d\n",*ab);
      printf("value of m :%d",m);
     printf("address of m:%p\n",&m);

    return 0;
}
