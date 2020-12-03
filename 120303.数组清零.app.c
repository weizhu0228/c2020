#include<stdio.h>
#include<windows.h>
void main()
{
	int i,k;
	int a2d[20][10]={
		{2,1,3,6,1},
		{4,5,6,4,5},
		{6,5,4,5,5}
	};
	for(i=0;i<20;i++){
		for(k=0;k<10;k++)
			
		{
			a2d[i][k]=999;
			printf("%d ",a2d[i][k]);
			
		}
		printf("\n");
	}
	printf("\n");
	Sleep(5000);
	for(i=0;i<20;i++){
			for(k=0;k<10;k++)
			
			{
				a2d[i][k]=0;
				printf("%d ",a2d[i][k]);
			
			}
			printf("\n");
		}
}
