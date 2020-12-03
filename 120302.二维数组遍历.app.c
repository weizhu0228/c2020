#include<stdio.h>
void main()
{
	int i,k;
	int a2d[3][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	for(i=0;i<3;i++){
		for(k=0;k<4;k++)
		{
			printf("%d ",a2d[i][k]);
		}
		printf("\n");
	}
}
