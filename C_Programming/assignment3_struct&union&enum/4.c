#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info
{
    char name[100];
    int rollNumber;
    float marks;
};
int main()
{
    struct info t[10];
     printf("enter information of students:\n");
     for(int i=0;i<10;i++)
        {
            printf("for roll Number: %d\n",i+1);
     t[i].rollNumber=i+1;
      printf("enter name:\n");
     scanf(" %s",&t[i].name);
     printf("enter marks:\n");
     scanf("%f",&t[i].marks);
        }

         printf("display information of student:\n");
         for(int i=0;i<10;i++)
 printf("for Roll Number %d\nName:%s\nmarks:%.2f\n",t[i].rollNumber,t[i].name,t[i].marks);



    return 0;
}
