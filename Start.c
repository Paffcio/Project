#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "konwerter.h"
#include "Negacja.h"
#include "Znak.c"
int a,z,f,f1,f2;
long long f3,f4;
void start(int liczba,int liczba2)
{
int b,c,d,e;
long long z1=0,z2=0;
d=liczba;
konwerter(liczba);
c=a;
e=liczba2;
konwerter(liczba2);
b=a;
switch(k)
{
case 1:
z=d & e;
konwerter(z);
f=a;
printf("%d & %d = %d\n",c,b,f);
break;
case 2:
z=d | e;
konwerter(z);
f1=a;
printf("%d | %d = %d\n",c,b,f1);
break;
case 3:
z=d ^ e;
konwerter(z);
f2=a;
printf("%d ^ %d = %d\n",c,b,f2);
break;
case 4:
konwerter(d);
z1=a;
printf("~%d=",z1);
Negacja(d);
konwerter(e);
z2=a;
printf("~%d=",z2);
Negacja(e);
break;
default:
printf("Bledny znak\n");
break;
}
}
