#include<stdio.h>
void main()
{
	int a,b,c=0;
	int a2d[19][20]={0};
	for(a=0;a<19;a++)
	{
		for(b=0;b<20;b++){
			c++;
		a2d[a][b]=c;
		printf("%d ",a2d[a][b]);
		}
			
	printf("\n");
	}
	

}

	
