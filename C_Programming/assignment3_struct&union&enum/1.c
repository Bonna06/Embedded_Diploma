#include <stdio.h>
#include <stdlib.h>

struct info
{
    char name[100];
    int rollNumber;
    float marks;
};
int main()
{
    struct info t;
     printf("enter information of student:\n");
    printf("enter name:\n");
    scanf("%s",&t.name);
    printf("enter rollNumber:\n");
    scanf("%d",&t.rollNumber);
    printf("enter marks:\n");
    scanf("%f",&t.marks);
         printf("display information of student:\n");

    printf("Name:%s\nRollNumber:%d\nmarks:%.2f\n",t.name,t.rollNumber,t.marks);


    return 0;
}
