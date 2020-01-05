#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "Start.c"
int konwerter(int n)
{
long long x=0;
int y,i=1;
while(n!=0)
{
y=n%2;
n/=2;
x+=y*i;
i*=10;
}
a=x;
}
