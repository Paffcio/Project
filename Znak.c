#include<stdio.h>
#include<stdlib.h>
int k=0;
void znak(char o)
{
if(o=='&') k=1;
else if(o=='|') k=2;
else if(o=='^') k=3;
else if(o=='~') k=4;
else k=5;
}
