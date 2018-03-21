#include<stdio.h>
void mod100(int*);
void mod200(int*);
 int main()
{
int x,y;
mod100(&x);
mod200(&y);
printf("value of x from mod100=%d \n value of y from mod200=%d \n",x,y);
return 0;
}
