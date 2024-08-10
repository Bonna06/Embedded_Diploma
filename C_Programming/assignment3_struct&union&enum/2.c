#include <stdio.h>
#include <stdlib.h>

struct add
{
    float inch;
    float feet;
};
struct add t;
struct add u;
void Add(void)
{
    float res=0,y;
    int x;
    if(t.inch+u.inch>=12)
    {
        x=(t.inch+u.inch)/12;
        y=((t.inch+u.inch))-x*12;
    }
    else
    {
        y=t.inch+u.inch;
    };
    res=u.feet+t.feet+x;
    printf("%.2f'-%.2f",res,y);
}


int main()
{
    printf("enter information of 1st distance\n");
    printf("enter feet \n");
    scanf(" %f",&t.feet);
    printf("enter inch \n");
    scanf(" %f",&t.inch);
    printf("enter information of 2st distance\n");
    printf("enter feet \n");
    scanf(" %f",&u.feet);
    printf("enter inch \n");
    scanf(" %f",&u.inch);
    Add();
    return 0;
}
