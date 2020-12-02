#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	switch(a)
	{
	case 'a':printf("你在点击左键\n");break;
	case 's':printf("你在点击下键\n");break;
	case 'd':printf("你在点击右键\n");break;
	case 'w':printf("你在点击上键\n");break;
	default:printf("请输入awsd，谢谢\n");
	}
return 0;
}
