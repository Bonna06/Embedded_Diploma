#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char *Name;
    int ID;
};
int main()
{
    struct employee emp1= {"Jak",1001};
    struct employee emp2= {"Alex",1002};
    struct employee emp3= {"sami",1003};
    struct employee (*arr[])= {&emp1,&emp2,&emp3};
    struct employee (*(*pt)[3])=arr;
    printf("employee Name: %s\n",(**(*pt+1)).Name);
    printf("employee Name: %d",(*(*pt+1))->ID);

    return 0;
}
