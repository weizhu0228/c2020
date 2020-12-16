#include<stdio.h>
int myfuction(int x){
	if(x<=0){
	return 0;
	}
	return x+myfuction(x-1);
}
void main()
{
	int a;
	scanf("%d",&a);
	if(a>0){
	printf("%d\n",myfuction(a));
	}
	else{
	printf("请输入一个大于0的数\n");
	}
}
