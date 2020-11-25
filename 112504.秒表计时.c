#include<stdio.h>
#include<windows.h>
void main()
{
	int i,n=15000000;
printf("秒表计时器\n");
for(i=1;i<=n;i++)
{
Sleep(1000);
printf("现在是%d秒\n",i);
}
}
