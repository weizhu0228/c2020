#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="游戏开始";
	char b1[10];
	scanf("%s",&b1);
	if( strcmp(a,b1) == 0 ){
		printf("猜数字,请输入1——20\n");
		while(1)
		{
			int daan=10,a,i;
			for(a=1;a<=20;a++){
		printf("第%d次挑战\n",a);
		scanf("%d",&i);
		if(i==daan)
		{
		printf("恭喜你，猜对了！！！\n");
		
		}
		else if(i>daan)
		{
		printf("你的答案猜大了。\n");
		}
		else
		{
		printf("你的答案猜小了。\n");
		}
		}
		}
		
	}
}
