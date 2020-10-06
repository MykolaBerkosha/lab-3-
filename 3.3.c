#include <stdio.h>
#include <math.h>


int main()
{
    float x,y,f,a,b;
    printf("x=");
    scanf("%f",&x);
    printf("y=");
    scanf("%f",&y);
    a=pow(x,2)+pow(y,2);
    b=sqrt(x-y);
    if (b==0)
    {
      printf("Виконується ділення на нуль");
    }
    else if(x<y)
    {
      printf("Корінь з від'ємного число не можна взяти");
    }
    else
    {
      f=a/b;
      printf("Значення функції a = %f",f);
    }  
}