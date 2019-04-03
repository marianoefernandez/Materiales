#include <stdio.h>
int factorial(int x, int y);
int main()
{
int a, b , r1 , r2;
printf("\nIngrese numero:");
scanf("%d",&a);
printf("\nIngrese otro numero:");
scanf("%d",&b);
r1 , r2=factorial(a , b);
printf("\nEl factorial de A es %d",r1);
printf("\nEl factorial de B es %d",r2);
}
int factorial(int x, int y)
{
int r1;
int r2;

if(x==1)
return 1;
r1= x* factorial(x-1);

if(x==1)
return 1;
r2= y* factorial(y-1);

return (r1 , r2);
}
