#include<stdio.h>
int main()
{
int i;
printf("**********打工人工资判断程序**********\n");
scanf("%d",&i);
if(i>=0 && i<=100)
{
printf("贫困打工人\n");
}
else if(i>=101 && i<=1000)
{
printf("一般打工人\n");
}
else if(i>=1001 && i<=20000)
{
printf("土豪打工人\n");
}
else
{
printf("输入有误，请重新输入。\n");
}
}
