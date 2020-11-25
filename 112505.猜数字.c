#include<stdio.h>
#include<windows.h>
void main()
{
	int daan=10,number;
	scanf("%d",&number);
	if(number==daan)
	{
	printf("恭喜你，挑战成功!!!\n");
	}
    else if(number>daan)
	{
	printf("你猜的太大了。\n");
	}
	else
	{
	printf("你猜的太小了。\n");
	}
	
}
