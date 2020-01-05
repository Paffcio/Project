#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "konwerter.c"
#include "Negacja.c"
#include "Znak.c"
#include "Start.c"
int main()
{
int t,p;
char o;
scanf("%d",&t);
scanf("%d",&p);
scanf("%s",&o);
znak(o);
start(t,p);
return 0;
}
