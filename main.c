#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "dodawanie.h"
#include "odejmowanie.h"
#include "mnozenie.h"
#include "dzielenie.h"
int main()
{
double x=0.0;
double y=0.0;
char operator;
printf("                           Prosty kalkulator                    \n\n");
printf("Podaj pierwsza liczbe:");
scanf("%lf",&x);
printf("\n");
printf("Podaj znak operacji:");
scanf("%lf",&y);
printf("\n");
printf("Podaj druga liczbe:");
scanf("%s",&operator);
printf("\n");
switch(operator)
{
case '+':
dodaj(x,y);
break;
case '-'
odejmij(x,y);
break;
case '*':
pomnoz(x,y);
break;
case '/':
podziel(x,y);
break;
default:
printf("Bledny znak\n");
break;
}
return 0;
}
