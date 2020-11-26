#include<stdio.h>
void main()
{
int a,b,c,d;
printf("输入任意三个数，由小到大排列。\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
d=a;
a=b;
b=d;
}
if(a>c)
{
c=a;
a=c;
c=d;
}
if(b>c)
{
d=b;
b=c;
c=d;
}
printf("%d %d %d\n",a,b,c);
}
