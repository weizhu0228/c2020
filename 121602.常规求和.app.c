#include<stdio.h>
void main()
{
	int i=1,s1=0,x;
	scanf("%d",&x);
	if(x>0){
	while(i<=x) 
	{
        s1+=x;
        x--;
	}
	printf("s1=%d\n",s1);
	}
	else{
	printf("请输入一个大于0的数\n");
	}
}
