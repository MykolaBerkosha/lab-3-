#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float d;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    d=pow(b,2)-4*a*c;
    if(d<0)
    {
      printf("Рівняння не має жодного кореня.");
    }
    else if(d>0)
    {
      printf("Рівняння має два кореня.");
    }
    else
    {
      printf("Рівняння має тільки один корень.");
    }
}