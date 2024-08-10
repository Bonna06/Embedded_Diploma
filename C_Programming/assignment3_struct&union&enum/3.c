#include <stdio.h>
#include <stdlib.h>

struct add
{
    float real;
    float img;
};
struct add t;
struct add u;
void Add(struct add a,struct add b)
{
printf("Sum=%.1f+%.1fi\n",a.real+b.real,a.img+b.img);
}


int main()
{
    printf("enter 1st Complex number\n");
    printf("enter real and imaginary \n");
    scanf(" %f",&t.real);
    scanf(" %f",&t.img);
      printf("enter 2st Complex number\n");
    printf("enter real and imaginary \n");
    scanf(" %f",&u.real);
    scanf(" %f",&u.img);

    Add(t,u);
    return 0;
}
