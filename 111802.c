#include<stdio.h>
void main(){
int n;
printf("****************打工人工资等级划分****************\n");
scanf("%d",&n);
if(n<0){
	printf("你还有花呗没还，无法使用该程序。\n");
}
else if(n>=0&&n<=500){
	printf("赤贫。\n");
}
else if(n>=501&&n<=1500){
	printf("贫困。\n");
}
else if(n>=1501&&n<=3000){
	printf("普通打工人。\n");
}
else if(n>=3001&&n<=5000){
	printf("普通清洁工。\n");
}
else if(n>=5001&&n<=12000){
	printf("水电工工资。\n");
}
else if(n>=12001&&n<=50000){
	printf("脑袋大脖子粗不是老板就是伙夫。\n");
}
else if(n>=50001&&n<=200000000){
	printf("程序员。\n");
}
else
{
printf("-100000-200000000");
}

}
