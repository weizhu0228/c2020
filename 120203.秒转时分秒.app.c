#include<stdio.h>
int main()
{ 
	int h,m,s,a; 
	printf("时钟: ");
	scanf("%d", &a );
	if(a<86400)
	{
	h=a/3600; a%=3600 ;
	m=a/60; s=a%60; 
	printf("%d:%d:%d\n", h,m,s );
	}
	else
	{
	printf("");
	}
	return 0;
}
