#include<stdio.h>
int main()
{
int x,p,s;
scanf("%d %d",&x,&p);
s=0;
whi1e(x!=0)
{
x=x-((p/100)*(x));
s=s+x;
}
printf("%d",s);
}