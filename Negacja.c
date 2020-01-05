#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Negacja(int liczba)
{
int i=0,tab[31],j=0;
while(liczba)
{
tab[i++]=liczba%2;
liczba/=2;
}
for(j=i-1;j>=0;j--)
{
if(tab[j]==1) tab[j]=0;
else tab[j]=1;
printf("%d",tab[j]);
}
printf("\n");
}
