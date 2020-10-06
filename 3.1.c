#include <stdio.h>
#include <math.h>
int main()
{
int y,z;
float x;
printf("Напишіть y=5, y=10 або y=2\ny=");
scanf("%d",&y);
printf("z=");
scanf("%d",&z);
if(y == 5)
{
      x = sqrt(3*y)-pow(z,2);
	 printf ("\nПерша умова = %f",x);
}
else if (y == 10)
{
      x = y/2+15*z;
     printf ("\nДруга умова = %f",x);
}
else if (y == 2)
{
     x = y*z-7-z;
     printf ("\nТретя умова  = %f",x);
}
else
{
  printf("Ні одна з умов не виконалась");
}
    return 0;
}