#include <stdio.h>
#include <string.h>
void main(){
		char b[]="春节";
		char c[]="端午节";
		char d[]="中秋节";
		char e[]="元宵节";
		char a1[80];
	printf("****欢迎使用吃货小程序*****\n");
	scanf("%s",&a1);
	if(strcmp(b,a1)==0){
	printf("给我安排饺子\n");
	}
	else if(strcmp(c,a1)==0){
	printf("给我安排粽子。\n");
	}
	else if(strcmp(d,a1)==0){
	printf("给我安排月饼。\n");
	}
	else if(strcmp(e,a1)==0){
	printf("给我安排元宵。\n");
	}
	else{
	printf("");
	}
}
