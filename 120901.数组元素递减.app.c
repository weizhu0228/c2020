#include<stdio.h>
void main()
{
	int a,b,c=90;
	int a2d[9][10]={0};
	for(a=0;a<9;a++)
	{
		for(b=0;b<10;b++){
		printf("%d ",a2d[a][b]);
		}
		printf("\n");
	
	}
	for(a=0;a<9;a++)
	{
		for(b=0;b<10;b++){
		a2d[a][b]=c;
		printf("%d ",a2d[a][b]);
		c--;
		}
		printf("\n");
	
	}

}

	
