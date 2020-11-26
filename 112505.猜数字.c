#include<stdio.h>
#include<windows.h>
void main()
{
int daan=10,a=1,i;
printf("猜数字,请输入1——10\n");
while(a<=10)
{
printf("第%d次挑战\n",a);
scanf("%d",&i);
if(i==daan)
{
printf("恭喜你，猜对了！！！");
a=a+10;
}
else if(i>daan)
{
printf("你的答案猜大了。");
}
else
{
printf("你的答案猜小了。");
a++;
}
}
}
